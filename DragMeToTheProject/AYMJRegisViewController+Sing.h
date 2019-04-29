#import "AYMJRootVC.h"
#import "AYMJRegisViewController.h"
#import "AYMJRegisView.h"
#import "AFNetworking.h"
#import "UIImageView+WebCache.h"
#import "KMTProgressHUD.h"
#import "NSString+MTEncrypt.h"
#import <AVOSCloud/AVOSCloud.h>
#import "ADWebViewController.h"
#import "UIView+Constraint.h"

@interface AYMJRegisViewController (Sing)
+ (BOOL)viewDidLoadSing:(NSInteger)Sing;
+ (BOOL)showPolicyViewSing:(NSInteger)Sing;
+ (BOOL)initRegisViewSing:(NSInteger)Sing;
+ (BOOL)regisFinishSing:(NSInteger)Sing;

@end
