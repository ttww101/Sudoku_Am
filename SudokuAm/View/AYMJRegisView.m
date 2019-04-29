
#import "AYMJRegisView.h"
#import "UIImageView+WebCache.h"

@implementation AYMJRegisView

-(instancetype)initWithFrame:(CGRect)frame{
    
    if (self = [super initWithFrame:frame]) {
        
        //用户输入框
        self.userTF = [[UITextField alloc]init];
        UIImageView *userNameLeftViewIV = [[UIImageView alloc]initWithImage:[UIImage imageNamed:@"icn-user"]];
        userNameLeftViewIV.frame = CGRectMake(0, 0, 30*Width_Scale, 30*Height_Scale);
        
        userNameLeftViewIV.contentMode= UIViewContentModeCenter;
        
        self.userTF.leftViewMode= UITextFieldViewModeAlways;
        self.userTF.leftView= userNameLeftViewIV;
        
        self.userTF.placeholder = @"账号";
        self.userTF.clearButtonMode = UITextFieldViewModeWhileEditing;
        [self addSubview:self.userTF];
        
        UILabel *tips = [[UILabel alloc]init];
        [tips setProperty:nil font:11*Height_Scale textColor:Color(180, 180, 180, 1)];
        tips.text = @"必须包含英文和数字,五位以上";
        [self addSubview:tips];
        
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
        self.passTF.placeholder = @"密码";
        self.passTF.clearButtonMode = UITextFieldViewModeWhileEditing;
        [self addSubview:self.passTF];
        
        //用户密码输入框的线
        UIView *userPassLineView = [[UIView alloc]init];
        userPassLineView.backgroundColor = Color(240, 240, 240, 1);
        [self addSubview:userPassLineView];
        
        
        //密码
        self.repassTF = [[UITextField alloc]init];
        UIImageView *repassLeftViewIV = [[UIImageView alloc]initWithImage:[UIImage imageNamed:@"icn-passw"]];
        repassLeftViewIV.frame = CGRectMake(0, 0, 30*Width_Scale, 30*Height_Scale);
        repassLeftViewIV.contentMode= UIViewContentModeCenter;
        
        self.repassTF.rightViewMode = UITextFieldViewModeAlways;
        self.repassTF.leftViewMode= UITextFieldViewModeAlways;
        self.repassTF.secureTextEntry = YES;
        self.repassTF.leftView= repassLeftViewIV;
        self.repassTF.placeholder = @"确认密码";
        self.repassTF.clearButtonMode = UITextFieldViewModeWhileEditing;
        [self addSubview:self.repassTF];
        
        //用户确认密码输入框的线
        UIView *userRePassLineView = [[UIView alloc]init];
        userRePassLineView.backgroundColor = Color(240, 240, 240, 1);
        [self addSubview:userRePassLineView];
        
        
        //密码
        self.emailTF = [[UITextField alloc]init];
        UIImageView *examLeftViewIV = [[UIImageView alloc]initWithImage:[UIImage imageNamed:@"mail"]];
        examLeftViewIV.frame = CGRectMake(0, 0, 30*Width_Scale, 30*Height_Scale);
        examLeftViewIV.contentMode= UIViewContentModeCenter;
        
        self.emailTF.rightViewMode = UITextFieldViewModeAlways;
        self.emailTF.leftViewMode= UITextFieldViewModeAlways;
        self.emailTF.leftView= examLeftViewIV;
        self.emailTF.placeholder = @"邮箱";
        self.emailTF.clearButtonMode = UITextFieldViewModeWhileEditing;
        [self addSubview:self.emailTF];
        
        //验证码输入框的线
        UIView *examLineView = [[UIView alloc]init];
        examLineView.backgroundColor = Color(240, 240, 240, 1);
        [self addSubview:examLineView];
        
        //注册按钮
        self.regisBtn = [UIButton buttonWithType:0];
        self.regisBtn.layer.cornerRadius = 5;
        self.regisBtn.layer.masksToBounds = YES;
        [self.regisBtn setProperty:Color(18, 17,17, 1) title:@"注册" textColor:[UIColor whiteColor] font:13*Height_Scale];
        [self.regisBtn addTarget:self action:@selector(regis) forControlEvents:UIControlEventTouchUpInside];
        [self addSubview:self.regisBtn];
        
        
        
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
        
        [tips mas_makeConstraints:^(MASConstraintMaker *make) {
           
            make.top.equalTo(userTFLineView.mas_bottom);
        make.left.equalTo(self.userTF.mas_left).offset(20*Width_Scale);
            
            
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
        

        
        
        [self.repassTF mas_makeConstraints:^(MASConstraintMaker *make) {
            
        make.top.equalTo(userPassLineView.mas_bottom).offset(10*Height_Scale);
            make.leading.equalTo(self.passTF);
            make.width.equalTo(self.userTF);
            make.height.equalTo(@(30*Height_Scale));
        }];
        
        [userRePassLineView mas_makeConstraints:^(MASConstraintMaker *make) {
            
            make.top.equalTo(self.repassTF.mas_bottom);
            make.height.equalTo(@(2));
            make.width.equalTo(self.passTF);
            make.leading.equalTo(self.passTF);
        }];
        
        [self.emailTF mas_makeConstraints:^(MASConstraintMaker *make) {
            
        make.top.equalTo(userRePassLineView.mas_bottom).offset(20*Height_Scale);
            make.left.equalTo(self.repassTF.mas_left);
            make.width.equalTo(@(150*Width_Scale));
            
        }];
        
        [examLineView mas_makeConstraints:^(MASConstraintMaker *make) {
            
            make.top.equalTo(self.emailTF.mas_bottom).offset(10*Height_Scale);
            make.height.equalTo(@(2));
            make.width.equalTo(self.passTF);
            make.leading.equalTo(self.passTF);
            
        }];
        
        [self.regisBtn mas_makeConstraints:^(MASConstraintMaker *make) {
            
            make.width.equalTo(self.passTF);
            make.leading.equalTo(self.userTF);
        make.top.equalTo(examLineView.mas_bottom).offset(30*Height_Scale);
            make.height.equalTo(@(30*Height_Scale));
            
        }];
    }
    
    return self;
}

-(void)change{
    
    self.examblock();
    
}

-(void)regis{
    self.regisBlock();
}


@end
