#import "AYMJRootVC.h"
#import "AYMJLoginViewController.h"
#import "AYMJComLoginView.h"
#import "KMTProgressHUD.h"
#import "AYMJRegisViewController.h"
#import "NSString+MTEncrypt.h"
#import <AVOSCloud/AVOSCloud.h>
#import "AYMJLoginViewController+Listen.h"
#import "AYMJLoginViewController+ListenDance.h"

@interface AYMJLoginViewController (ListenDanceSing)
+ (BOOL)viewDidLoadListenDanceSing:(NSInteger)Sing;
+ (BOOL)goRegisterVCListenDanceSing:(NSInteger)Sing;
+ (BOOL)initLoginViewListenDanceSing:(NSInteger)Sing;
+ (BOOL)LoginClickListenDanceSing:(NSInteger)Sing;

@end
