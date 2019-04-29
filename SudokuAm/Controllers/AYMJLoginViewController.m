//
//  AYMJLoginViewController.m
//  意料之外
//
//  Created by  何浩贤 on 2017/8/22.
//  Copyright © 2017年 com.UNEXPECTED.yijia. All rights reserved.
//

#import "AYMJLoginViewController.h"
#import "AYMJComLoginView.h"
#import "KMTProgressHUD.h"
#import "AYMJRegisViewController.h"
#import "NSString+MTEncrypt.h"
#import <AVOSCloud/AVOSCloud.h>

@interface AYMJLoginViewController ()<AYMJComLoginViewDelegate,UITextFieldDelegate>

@property (nonatomic, strong) AYMJComLoginView *loginView;
@end

@implementation AYMJLoginViewController


- (void)viewDidLoad {
    [super viewDidLoad];

    [self addTitleWithTitle:@"登录"];

    UIButton *regis = [UIButton buttonWithType:0];
    regis.frame = CGRectMake(0, 0, 50*Width_Scale, 30*Height_Scale);
    [regis setProperty:nil title:@"注册" textColor:[UIColor blackColor] font:11*Height_Scale];
    [regis addTarget:self action:@selector(goRegisterVC) forControlEvents:UIControlEventTouchUpInside];
    self.navigationItem.rightBarButtonItem = [[UIBarButtonItem alloc]initWithCustomView:regis];
    [self initLoginView];
    
//    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(gameStatusChanged:) name:@"STATUS_CODE" object:nil];
}


#pragma mark ————— 注册 —————
- (void)goRegisterVC {
    AYMJRegisViewController *regis = [[AYMJRegisViewController alloc]init];
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
-(void)LoginClick {
  
    [_loginView.userTF endEditing:YES];
    [_loginView.passTF endEditing:YES];
    
    if ([_loginView.userTF.text isEqualToString:@""] || [_loginView.passTF.text isEqualToString:@""]) {
        
        [KMTProgressHUD withMessage:@"请填写账号/密码!" animated:YES View:self.view];
        return;
    }
    
    NSMutableDictionary *param = [[NSMutableDictionary alloc]init];
    param[@"account"] = self.loginView.userTF.text;
    param[@"passwd"] = self.loginView.passTF.text;
    
    NSInteger timeStamp = [[AMNetWorkTools GetTimestamp] integerValue];
    param[@"time"] = [NSString stringWithFormat:@"%ld",timeStamp];
    
    NSString *result = [NSString stringWithFormat:@"account=%@&passwd=%@&time=%ld&key=asdlsadfasdfsddklss",self.loginView.userTF.text,self.loginView.passTF.text,timeStamp];
    
    param[@"sing"] = result.md5String;

    AVQuery *query = [[AVQuery alloc] initWithClassName:@"Login"];
  
    [query findObjectsInBackgroundWithBlock:^(NSArray * _Nullable objects, NSError * _Nullable error) {
        if (error != nil) {
            [KMTProgressHUD withMessage:@"登入失敗" animated:YES View:self.view];
        } else {
            if (objects == nil) {
                [KMTProgressHUD withMessage:@"找不到該帳號" animated:YES View:self.view];
            } else {
                [objects enumerateObjectsUsingBlock:^(id  _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
                    
                    AVObject *avObject = (AVObject *)obj;
                    NSString *account = [avObject valueForKey:@"account"];
                    NSString *pw = [avObject valueForKey:@"password"];
                    
                    [[NSUserDefaults standardUserDefaults] setObject:@"0" forKey:@"status"];
                    
                    if (account == self.loginView.userTF.text && pw == self.loginView.passTF.text) {
                        
                        [[NSUserDefaults standardUserDefaults] setObject:@"1" forKey:@"status"];
                        *stop = YES;
                        return;
                    }
                }];
                
                if ([[[NSUserDefaults standardUserDefaults] objectForKey:@"status"] isEqualToString:@"1"]) {
                    [KMTProgressHUD mt_showMessage:@"登入成功"  animated:YES View:self.view complete:^{
                        [self dismissViewControllerAnimated:YES completion:^{
                        }];
                    }];
                } else {
                    [KMTProgressHUD withMessage:@"登入失敗" animated:YES View:self.view];
                }
                
            }
        }
    }];
}

@end
