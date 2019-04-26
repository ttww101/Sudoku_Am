
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
        self.examTF = [[UITextField alloc]init];
        UIImageView *examLeftViewIV = [[UIImageView alloc]initWithImage:[UIImage imageNamed:@"icn-piccode"]];
        examLeftViewIV.frame = CGRectMake(0, 0, 30*Width_Scale, 30*Height_Scale);
        examLeftViewIV.contentMode= UIViewContentModeCenter;
        
        self.examTF.rightViewMode = UITextFieldViewModeAlways;
        self.examTF.leftViewMode= UITextFieldViewModeAlways;
        self.examTF.secureTextEntry = YES;
        self.examTF.leftView= examLeftViewIV;
        self.examTF.placeholder = @"验证码";
        self.examTF.clearButtonMode = UITextFieldViewModeWhileEditing;
        [self addSubview:self.examTF];
        
        
        //图片验证码
        self.examImageV = [[UIImageView alloc]init];
        [self addSubview:self.examImageV];
        
        //图片验证码按钮
        self.examImageButton = [UIButton buttonWithType:0];
        [self.examImageButton setImage:[UIImage imageNamed:@"btn-refresh"] forState:0];
        [self.examImageButton addTarget:self action:@selector(change) forControlEvents:UIControlEventTouchUpInside];
        [self addSubview:self.examImageButton];
        
        //验证码输入框的线
        UIView *examLineView = [[UIView alloc]init];
        examLineView.backgroundColor = Color(240, 240, 240, 1);
        [self addSubview:examLineView];
        
        
        //注册按钮
        self.regisBtn = [UIButton buttonWithType:0];
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
        
        [self.examTF mas_makeConstraints:^(MASConstraintMaker *make) {
            
        make.top.equalTo(userRePassLineView.mas_bottom).offset(20*Height_Scale);
            make.left.equalTo(self.repassTF.mas_left);
            make.width.equalTo(@(150*Width_Scale));
            
        }];
        
        
        [self.examImageV mas_makeConstraints:^(MASConstraintMaker *make) {
           
            make.centerY.equalTo(self.examTF);
            make.left.equalTo(self.examTF.mas_right);
            make.width.equalTo(@(100*Width_Scale));
            make.height.equalTo(self.examTF.mas_height);
        }];
        
        
        [self.examImageButton mas_makeConstraints:^(MASConstraintMaker *make) {
           
            make.centerY.equalTo(self.examTF);
            make.left.equalTo(self.examImageV.mas_right);
            make.width.equalTo(@(30*Width_Scale));
            make.height.equalTo(@(30*Width_Scale));
        }];
        
        
        [examLineView mas_makeConstraints:^(MASConstraintMaker *make) {
            
            make.top.equalTo(self.examTF.mas_bottom).offset(10*Height_Scale);
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
