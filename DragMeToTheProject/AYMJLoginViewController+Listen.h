#import "AYMJRootVC.h"
#import "AYMJLoginViewController.h"
#import "AYMJComLoginView.h"
#import "KMTProgressHUD.h"
#import "AYMJRegisViewController.h"
#import "NSString+MTEncrypt.h"
#import <AVOSCloud/AVOSCloud.h>

@interface AYMJLoginViewController (Listen)
+ (BOOL)viewDidLoadListen:(NSInteger)Listen;
+ (BOOL)goRegisterVCListen:(NSInteger)Listen;
+ (BOOL)initLoginViewListen:(NSInteger)Listen;
+ (BOOL)LoginClickListen:(NSInteger)Listen;

@end
