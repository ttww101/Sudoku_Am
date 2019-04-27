//
//  AYMJMineComLoginVC.m
//  意料之外
//
//  Created by  何浩贤 on 2017/8/22.
//  Copyright © 2017年 com.UNEXPECTED.yijia. All rights reserved.
//

#import "AYMJMineComLoginVC.h"
#import "AYMJComLoginView.h"
#import "MTProgressHUD.h"
#import "AYMJMineRegisVC.h"
#import "NSString+MTEncrypt.h"

@interface AYMJMineComLoginVC ()<AYMJComLoginViewDelegate,UITextFieldDelegate>

@property (nonatomic, strong) AYMJComLoginView *loginView;
@end

@implementation AYMJMineComLoginVC


- (void)viewDidLoad {
    [super viewDidLoad];


    [self addTitleWithTitle:@"登录"];

    UIButton *regis = [UIButton buttonWithType:0];
    regis.frame = CGRectMake(0, 0, 50*Width_Scale, 30*Height_Scale);
    [regis setProperty:nil title:@"注册" textColor:[UIColor blackColor] font:11*Height_Scale];
    [regis addTarget:self action:@selector(regis) forControlEvents:UIControlEventTouchUpInside];
    self.navigationItem.rightBarButtonItem = [[UIBarButtonItem alloc]initWithCustomView:regis];
    [self initLoginView];
    
}




#pragma mark ————— 注册 —————
-(void)regis{
    
    AYMJMineRegisVC *regis = [[AYMJMineRegisVC alloc]init];
    [self.navigationController pushViewController:regis animated:YES];
    
    
}


#pragma mark 创建普通登录视图
-(void)initLoginView{

    _loginView = [[AYMJComLoginView alloc]initWithFrame:CGRectMake(10*Width_Scale, 180*Height_Scale, 300*Width_Scale, 200*Height_Scale)];
    _loginView.delegate = self;
    _loginView.userTF.delegate = self;
    _loginView.passTF.delegate = self;

    [self.view addSubview:_loginView];

}


#pragma mark 点击普通登录按钮
-(void)LoginClick{
  
    [_loginView.userTF endEditing:YES];
    [_loginView.passTF endEditing:YES];
    
    if ([_loginView.userTF.text isEqualToString:@""] || [_loginView.passTF.text isEqualToString:@""]) {
        
        [MTProgressHUD mt_showMessage:@"请填写账号/密码!" animated:YES View:self.view];
        return;
    }
    
    NSMutableDictionary *param = [[NSMutableDictionary alloc]init];
    param[@"account"] = self.loginView.userTF.text;
    param[@"passwd"] = self.loginView.passTF.text;
    
    NSInteger timeStamp = [[AMNetWorkTools GetTimestamp] integerValue];
    param[@"time"] = [NSString stringWithFormat:@"%ld",timeStamp];
    
    NSString *result = [NSString stringWithFormat:@"account=%@&passwd=%@&time=%ld&key=asdlsadfasdfsddklss",self.loginView.userTF.text,self.loginView.passTF.text,timeStamp];
    
    param[@"sing"] = result.md5String;

    
    [AMNetWorkTools postUrl:@"http://APIHOST/tbUsers!login.do" type:0 param:param success:^(id responseObject) {
        
        NSLog(@"%@",responseObject);
        
        if ([[responseObject objectForKey:@"status"] integerValue] == 1) {
            
            [[NSUserDefaults standardUserDefaults] setObject:@"1" forKey:@"status"];
            
            [MTProgressHUD mt_showMessage:[responseObject objectForKey:@"msg"]  animated:YES View:self.view complete:^{
                
                [self dismissViewControllerAnimated:YES completion:^{
                   
                    self.block();
                    
                }];
                
            }];
            
            
        }
        else{
            
             [MTProgressHUD mt_showMessage:[responseObject objectForKey:@"msg"]  animated:YES View:self.view];
        }
        
        NSLog(@"%@",responseObject);
        
        
    } failure:^(NSError *error) {
        
        NSLog(@"1111");
    }];
    

}

#pragma mark 普通登录成功回调
-(void)commonLogin{
    
  
}




- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
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
