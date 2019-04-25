//
//  YJMineRegisVC.m
//  Borrowing treasure
//
//  Created by  何浩贤 on 2018/1/10.
//  Copyright © 2018年 com.BorrowingTreasure.yijia. All rights reserved.
//

#import "YJMineRegisVC.h"
#import "YJRegisView.h"
#import "AFNetworking.h"
#import "UIImageView+WebCache.h"
#import "MTProgressHUD.h"
#import "NSString+MTEncrypt.h"

@interface YJMineRegisVC ()
@property (nonatomic, strong) YJRegisView *regisView;
@end

@implementation YJMineRegisVC



- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.view.backgroundColor = [UIColor whiteColor];
    
    [self addTitleWithTitle:@"注册"];

    [self initRegisView];
    
    [self LoadImageNetwork];
    
}


-(void)LoadImageNetwork{
    
    [NetWorkTools postUrl:@"http://APIHOST/authImage!imageCode.do" type:1 param:nil success:^(id responseObject) {
        
        UIImage *image = [UIImage imageWithData:responseObject];
        
        _regisView.examImageV.image  = image;
        
    } failure:^(NSError *error) {

    }];
    

}

#pragma mark 创建注册视图
-(void)initRegisView{
    
    _regisView = [[YJRegisView alloc]initWithFrame:CGRectMake(10*Width_Scale, 130*Height_Scale, 300*Width_Scale, 400*Height_Scale)];
    
//    _regisView.userTF.delegate = self;
//    _regisView.passTF.delegate = self;
    
    [self.view addSubview:_regisView];
    
    
    //刷新验证码
    __weak typeof(self) weakself = self;
    _regisView.examblock = ^{
        
        [weakself LoadImageNetwork];
        
    };
    
    //注册
    _regisView.regisBlock = ^{
      
        [weakself regisFinish];
    };
    
}


#pragma mark ————— 注册 —————
-(void)regisFinish{
    
    if ([_regisView.userTF.text isEqualToString:@""]) {
        [MTProgressHUD mt_showMessage:@"账号不能为空!" animated:YES View:self.view];
        return;
    }
    
    if ([_regisView.passTF.text isEqualToString:@""]) {
        [MTProgressHUD mt_showMessage:@"密码不能为空!" animated:YES View:self.view];
        return;
    }
    
    if ([_regisView.repassTF.text isEqualToString:@""]) {
        [MTProgressHUD mt_showMessage:@"确认密码不能为空!" animated:YES View:self.view];
        return;
    }
    
    if ([_regisView.examTF.text isEqualToString:@""]) {
        [MTProgressHUD mt_showMessage:@"验证码不能为空!" animated:YES View:self.view];
        return;
    }
    
    NSMutableDictionary *param = [[NSMutableDictionary alloc]init];
    param[@"account"] = self.regisView.userTF.text;
    param[@"passwd"] = self.regisView.passTF.text;
    param[@"verifyCode"] = self.regisView.examTF.text;
    NSInteger timeStamp = [[NetWorkTools GetTimestamp] integerValue];
    param[@"time"] = [NSString stringWithFormat:@"%ld",timeStamp];
    
    NSString *result = [NSString stringWithFormat:@"account=%@&passwd=%@&verifyCode=%@&time=%ld&key=asdlsadfasdfsddklss",self.regisView.userTF.text,self.regisView.passTF.text,self.regisView.examTF.text,timeStamp];
    
    param[@"sing"] = result.md5String;
    
    NSLog(@"~~~%@",param);
    
    [NetWorkTools postUrl:@"http://APIHOST/tbUsers!reg.do?" type:0  param:param  success:^(id responseObject) {
        
        NSLog(@"re %@",responseObject);
        
        if ([[responseObject objectForKey:@"status"] integerValue] == 1) {
        
            
            [MTProgressHUD mt_showMessage:[responseObject objectForKey:@"msg"]  animated:YES View:self.view complete:^{

                [self.navigationController popViewControllerAnimated:YES];
                
//                [self dismissViewControllerAnimated:YES completion:^{
//
//                    self.block
//
//                }];
                
            }];
            
            
        }
        else{
            
            [MTProgressHUD mt_showMessage:[responseObject objectForKey:@"msg"]  animated:YES View:self.view];
        }
        
        
    } failure:^(NSError *error) {
        
    }];
    
    
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
