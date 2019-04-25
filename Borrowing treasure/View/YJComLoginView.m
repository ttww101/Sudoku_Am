//
//  YJComLoginView.m
//  意料之外
//
//  Created by  何浩贤 on 2017/8/22.
//  Copyright © 2017年 com.UNEXPECTED.yijia. All rights reserved.
//

#import "YJComLoginView.h"

@interface YJComLoginView ()

@property (nonatomic, assign) NSInteger status;

@end

@implementation YJComLoginView

-(instancetype)initWithFrame:(CGRect)frame{
 
    if (self = [super initWithFrame:frame]) {

        //用户输入框
        self.userTF = [[UITextField alloc]init];
        UIImageView *userNameLeftViewIV = [[UIImageView alloc]initWithImage:[UIImage imageNamed:@"icn-user"]];
        userNameLeftViewIV.frame = CGRectMake(0, 0, 30*Width_Scale, 30*Height_Scale);
        
        userNameLeftViewIV.contentMode= UIViewContentModeCenter;

        self.userTF.leftViewMode= UITextFieldViewModeAlways;
        self.userTF.leftView= userNameLeftViewIV;
        
        self.userTF.placeholder = @"请输入账号";
        self.userTF.clearButtonMode = UITextFieldViewModeWhileEditing;
        [self addSubview:self.userTF];
        
        //用户输入框的线
        UIView *userTFLineView = [[UIView alloc]init];
        userTFLineView.backgroundColor = Color(240, 240, 240, 1);
        [self addSubview:userTFLineView];
        
        //密码
        self.passTF = [[UITextField alloc]init];
        UIImageView *passLeftViewIV = [[UIImageView alloc]initWithImage:[UIImage imageNamed:@"icn-passw"]];
        passLeftViewIV.frame = CGRectMake(0, 0, 30*Width_Scale, 30*Height_Scale);
        passLeftViewIV.contentMode= UIViewContentModeCenter;
    
        self.passTF.rightViewMode = UITextFieldViewModeAlways;
        self.passTF.leftViewMode= UITextFieldViewModeAlways;
        self.passTF.secureTextEntry = YES;
        self.passTF.leftView= passLeftViewIV;
        self.passTF.placeholder = @"请输入密码";
        self.passTF.clearButtonMode = UITextFieldViewModeWhileEditing;
        [self addSubview:self.passTF];
        
        //用户密码输入框的线
        UIView *userPassLineView = [[UIView alloc]init];
        userPassLineView.backgroundColor = Color(240, 240, 240, 1);
        [self addSubview:userPassLineView];
        
        
        //登录按钮
        self.loginBtn = [UIButton buttonWithType:0];
        [self.loginBtn setProperty:Color(18, 17,17, 1) title:@"提交" textColor:[UIColor whiteColor] font:13*Height_Scale];
        [self.loginBtn addTarget:self action:@selector(Surelogin:) forControlEvents:UIControlEventTouchUpInside];
        [self addSubview:self.loginBtn];
        
        
        
       [self.userTF mas_makeConstraints:^(MASConstraintMaker *make) {
          
           make.top.equalTo(self.mas_top).offset(20*Height_Scale);
           make.left.equalTo(self.mas_left).offset(10*Width_Scale);
           make.right.equalTo(self.mas_right).offset(-10*Width_Scale);
           make.height.equalTo(@(30*Height_Scale));
       }];
        
       [userTFLineView mas_makeConstraints:^(MASConstraintMaker *make) {
          
           make.top.equalTo(self.userTF.mas_bottom);
           make.height.equalTo(@(2));
           make.width.equalTo(self.userTF);
           make.leading.equalTo(self.userTF);
           
       }];
        
        
       [self.passTF mas_makeConstraints:^(MASConstraintMaker *make) {
          
           make.top.equalTo(self.userTF.mas_bottom).offset(20*Height_Scale);
           make.leading.equalTo(self.userTF);
           make.width.equalTo(self.userTF);
           make.height.equalTo(@(30*Height_Scale));
       }];
        
        [userPassLineView mas_makeConstraints:^(MASConstraintMaker *make) {
           
            make.top.equalTo(self.passTF.mas_bottom);
            make.height.equalTo(@(2));
            make.width.equalTo(self.passTF);
            make.leading.equalTo(self.passTF);
            
        }];
        
    
        
       [self.loginBtn mas_makeConstraints:^(MASConstraintMaker *make) {
          
           make.width.equalTo(self.userTF);
           make.leading.equalTo(self.userTF);
      make.top.equalTo(userPassLineView.mas_bottom).offset(30*Height_Scale);
           make.height.equalTo(@(30*Height_Scale));
           
       }];
    }

    return self;
}

-(void)Surelogin:(UIButton *)btn{

    [self.delegate LoginClick];
    
    [self endEditing:YES];
    

}


@end
