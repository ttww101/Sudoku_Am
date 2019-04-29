
#import "AYMJRegisViewController.h"
#import "AYMJRegisView.h"
#import "AFNetworking.h"
#import "UIImageView+WebCache.h"
#import "KMTProgressHUD.h"
#import "NSString+MTEncrypt.h"
#import <AVOSCloud/AVOSCloud.h>
#import "ADWebViewController.h"
#import "UIView+Constraint.h"

@interface AYMJRegisViewController ()
@property (nonatomic, strong) AYMJRegisView *regisView;
@property (strong, nonatomic) ADWebViewController *policyVC;
@end

@implementation AYMJRegisViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.view.backgroundColor = [UIColor whiteColor];
    
    self.title = @"注册";
    
    [self initRegisView];
    
    [self showPolicyView];
}

#pragma mark 创建注册视图

- (void)showPolicyView {
    self.policyVC = [ADWebViewController initWithURL:@"https://www.privacypolicies.com/privacy/view/4715f5ad7eb3e0354fb9b048a0ba3b7a"];
    [self.policyVC layoutBottomBarHeight:0];
    [self.navigationController pushViewController:self.policyVC animated:YES];
    self.policyVC.title = @"隱私權條款";
}


-(void)initRegisView{
    
    _regisView = [[AYMJRegisView alloc]initWithFrame:CGRectMake(10*Width_Scale, 130*Height_Scale, 300*Width_Scale, 400*Height_Scale)];
    
    [self.view addSubview:_regisView];
    
    __weak typeof(self) weakself = self;
    
    //注册
    _regisView.regisBlock = ^{
      
        [weakself regisFinish];
    };
    
}

#pragma mark ————— 注册 —————

-(void)regisFinish{
    
    if ([_regisView.userTF.text isEqualToString:@""]) {
        [KMTProgressHUD withMessage:@"账号不能为空!" animated:YES View:self.view];
        return;
    }
    
    if ([_regisView.passTF.text isEqualToString:@""]) {
        [KMTProgressHUD withMessage:@"密码不能为空!" animated:YES View:self.view];
        return;
    }
    
    if ([_regisView.repassTF.text isEqualToString:@""]) {
        [KMTProgressHUD withMessage:@"确认密码不能为空!" animated:YES View:self.view];
        return;
    }
    
    if ([_regisView.emailTF.text isEqualToString:@""]) {
        [KMTProgressHUD withMessage:@"验证码不能为空!" animated:YES View:self.view];
        return;
    }
    
    AVObject *object = [[AVObject alloc] initWithClassName:@"Login"];
    [object setObject:self.regisView.userTF.text forKey:@"account"];
    [object setObject:self.regisView.passTF.text forKey:@"password"];
    [object setObject:self.regisView.emailTF.text forKey:@"mail"];
    [object saveEventually:^(BOOL succeeded, NSError * _Nullable error) {
        if (succeeded) {
            [[NSUserDefaults standardUserDefaults] setObject:@"1" forKey:@"status"];
            [KMTProgressHUD mt_showMessage:@"註冊成功"  animated:YES View:self.view complete:^{
                [self dismissViewControllerAnimated:YES completion:nil];
            }];
        } else {
            [[NSUserDefaults standardUserDefaults] setObject:@"0" forKey:@"status"];
            [KMTProgressHUD mt_showMessage:@"註冊失敗"  animated:YES View:self.view complete:nil];
        }
    }];
}

@end
