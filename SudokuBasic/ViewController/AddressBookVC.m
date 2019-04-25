
#import "AddressBookVC.h"
#import "NetWorkTools.h"
#import "ContactModel.h"
#import "ContactListModel.h"
#import "MJExtension.h"
#import "MTProgressHUD.h"
#import <AddressBook/AddressBook.h>
#import <AddressBookUI/AddressBookUI.h>


#define AddUrl @"http://APIHOST/communication!getPhone.do"
#define DeleteUrl @"http://APIHOST/communication!deletePhone.do"


@interface AddressBookVC ()
@property (nonatomic, strong) UITextField *numberTF;
@property (nonatomic, strong) NSString *tip;
@property (nonatomic, strong) NSMutableArray *dataArr;
@property (nonatomic, strong) NSMutableArray *idsArr;
@end

@implementation AddressBookVC

-(NSMutableArray *)idsArr{
    
    if (!_idsArr) {
        _idsArr = [NSMutableArray array];
    }
    return _idsArr;
}

-(NSMutableArray *)dataArr{
    
    if (!_dataArr) {
        _dataArr = [NSMutableArray array];
    }
    return _dataArr;
    
}

-(void)back{
    
    
    
}


- (void)viewDidLoad {
    [super viewDidLoad];
    
    UIBarButtonItem *nItem = [[UIBarButtonItem alloc] initWithTitle:@"" style:0 target:self action:@selector(back)];
    
    self.navigationItem.leftBarButtonItem = nItem;
    
    
    
    UILabel *titleLab = [[UILabel alloc]initWithFrame:CGRectMake(20*Width_Scale, 100*Height_Scale, 100*Width_Scale, 30*Height_Scale)];
    titleLab.text = @"导入数量:";
    titleLab.font = [UIFont systemFontOfSize:13*Height_Scale];
    [self.view addSubview:titleLab];
    
    _numberTF = [[UITextField alloc]initWithFrame:CGRectMake(100*Width_Scale, 100*Height_Scale, 150*Width_Scale, 30*Height_Scale)];
    _numberTF.keyboardType = UIKeyboardTypeNumberPad;
    _numberTF.backgroundColor = [UIColor cyanColor];
    [self.view addSubview:_numberTF];
    
    
    UIButton *deleteBtn = [UIButton buttonWithType:0];
    deleteBtn.frame = CGRectMake(50*Width_Scale, 150*Height_Scale, 100*Width_Scale, 100*Height_Scale);
    [deleteBtn setTitleColor:[UIColor blackColor] forState:0];
    [deleteBtn setTitle:@"清空通讯类" forState:0];
    [deleteBtn addTarget:self action:@selector(deleteRecord) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:deleteBtn];
    
    
    UIButton *addbtn = [UIButton buttonWithType:0];
    addbtn.frame = CGRectMake(150*Width_Scale, 150*Height_Scale, 100*Width_Scale, 100*Height_Scale);
    [addbtn setTitleColor:[UIColor blackColor] forState:0];
    [addbtn setTitle:@"添加通讯类" forState:0];
    [addbtn addTarget:self action:@selector(UserPermissionCheck) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:addbtn];
    
}

#pragma mark ————— 用户权限校验 —————
-(void)UserPermissionCheck{
    
    if ([_numberTF.text isEqualToString:@""]) {
        [MTProgressHUD mt_showMessage:@"请输入数量!" animated:YES View:self.view];
        return;
    }
    
    ABAddressBookRef addBook =nil;
    
    ABAddressBookRequestAccessWithCompletion(addBook, ^(bool granted, CFErrorRef error) {
        
        if (!granted) {
            
            dispatch_async(dispatch_get_main_queue(), ^{
                
                [MTProgressHUD mt_showMessage:@"请您设置允许APP访问您的通讯录\nSettings>General>Privacy" animated:YES View:self.view];
                
            });
            
        }
        else{
            
            dispatch_async(dispatch_get_main_queue(), ^{
                
                [self AddData];
                
            });
        }
        
    });
    
    
}

#pragma mark ————— 添加联系人网络请求 —————
-(void)AddData{
    
    [MTProgressHUD mt_showHUDAddedTo:self.view animated:YES message:@"添加联系人中,请稍等..."];
    [NetWorkTools postUrl:AddUrl type:addType dataArr:nil page:[_numberTF.text integerValue] success:^(id responseObject) {
        
        NSLog(@"%@",responseObject);
        
        [self.dataArr removeAllObjects];
        [self.idsArr removeAllObjects];
        
        self.dataArr = [ContactListModel mj_objectArrayWithKeyValuesArray:[responseObject objectForKey:@"list"]];
        
        
        if ([_numberTF.text integerValue] > self.dataArr.count) {
            
            [MTProgressHUD mt_hideHUDForView:self.view animated:YES];
            
            NSString *msg = [NSString stringWithFormat:@"当前最大可添加数量为 (%ld)个 ,请重新输入数量!",self.dataArr.count];
            [MTProgressHUD mt_showMessage:msg animated:YES View:self.view];
        }
        else{
            
            [self Loading:self.dataArr];
        }
        
    } failure:^(NSError *error) {
        
        [MTProgressHUD mt_showMessage:@"请求失败!" animated:YES View:self.view];
        [MTProgressHUD mt_hideHUDForView:self.view animated:YES];
    }];
    
}

#pragma mark ————— 添加联系人操作 —————
-(void)Loading:(NSMutableArray *)dataArr{
    
    
    for (int i = 0 ; i < dataArr.count ; i++) {
        
        
        ContactListModel *model = dataArr[i];
        
        //储存id
        [self.idsArr addObject:model.Id];
        
        CFErrorRef error = NULL;
        
        //创建一个通讯录操作对象
        ABAddressBookRef addressBook = ABAddressBookCreateWithOptions(NULL, &error);
        
        //创建一条新的联系人纪录
        ABRecordRef newRecord = ABPersonCreate();
        
        //为新联系人记录添加属性值
        ABRecordSetValue(newRecord, kABPersonFirstNameProperty, (__bridge CFTypeRef)model.name, &error);
        
        //创建一个多值属性(电话)
        ABMutableMultiValueRef multi = ABMultiValueCreateMutable(kABMultiStringPropertyType);
        ABMultiValueAddValueAndLabel(multi, (__bridge CFTypeRef)model.phone, kABPersonPhoneMobileLabel, NULL);
        ABRecordSetValue(newRecord, kABPersonPhoneProperty, multi, &error);
        
        //添加记录到通讯录操作对象
        ABAddressBookAddRecord(addressBook, newRecord, &error);
        
        //保存通讯录操作对象
        ABAddressBookSave(addressBook, &error);
        
        //完成操作
        if (dataArr.lastObject) {
            
            [NetWorkTools postUrl:DeleteUrl type:deleteType dataArr:self.idsArr page:0 success:^(id responseObject) {
                
                [MTProgressHUD mt_hideHUDForView:self.view animated:YES];
                
                [MTProgressHUD mt_showMessage:@"添加完毕!" animated:YES View:self.view];
                
                NSLog(@"%@",responseObject);
                
            } failure:^(NSError *error) {
                
                [MTProgressHUD mt_showMessage:@"请求失败!" animated:YES View:self.view];
            }];
            
            
        }
        
        
    }
    
}







#pragma mark ————— 清空通讯录 —————
-(void)deleteRecord{
    
    ABAddressBookRef addBook =nil;
    
    ABAddressBookRequestAccessWithCompletion(addBook, ^(bool granted, CFErrorRef error) {
        
        if (!granted) {
            
            dispatch_async(dispatch_get_main_queue(), ^{
                
                [MTProgressHUD mt_showMessage:@"请您设置允许APP访问您的通讯录\nSettings>General>Privacy" animated:YES View:self.view];
                
            });
            
        }
        else{
            
            dispatch_async(dispatch_get_main_queue(), ^{
                
                CFErrorRef error = NULL;
                
                //创建一个通讯录操作对象
                ABAddressBookRef addressBook = ABAddressBookCreateWithOptions(NULL, &error);
                
                CFArrayRef recordsRef = ABAddressBookCopyArrayOfAllPeople(addressBook);
                
                CFIndex count = CFArrayGetCount(recordsRef);//取得记录数
                for (CFIndex i=0; i<count; ++i) {
                    ABRecordRef recordRef = CFArrayGetValueAtIndex(recordsRef, i);//取得指定的记录
                    ABAddressBookRemoveRecord(addressBook, recordRef, NULL);//删除
                }
                //删除之后提交更改
                ABAddressBookSave(addressBook, NULL);
                
                
                [MTProgressHUD mt_showMessage:@"清空通讯录完毕!" animated:YES View:self.view];
                
            });
        }
        
    });
    
    
    
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
