#import "AYMJRootVC.h"
#import "AYMJLoginViewController.h"
#import "AYMJComLoginView.h"
#import "KMTProgressHUD.h"
#import "AYMJRegisViewController.h"
#import "NSString+MTEncrypt.h"
#import <AVOSCloud/AVOSCloud.h>
#import "AYMJLoginViewController+Listen.h"

@interface AYMJLoginViewController (ListenSing)
+ (BOOL)viewDidLoadListenSing:(NSInteger)Sing;
+ (BOOL)goRegisterVCListenSing:(NSInteger)Sing;
+ (BOOL)initLoginViewListenSing:(NSInteger)Sing;
+ (BOOL)LoginClickListenSing:(NSInteger)Sing;

@end
