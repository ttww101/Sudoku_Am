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
#import "AYMJRegisViewController+Sing.h"

@interface AYMJRegisViewController (SingRun)
+ (BOOL)viewDidLoadSingRun:(NSInteger)Run;
+ (BOOL)showPolicyViewSingRun:(NSInteger)Run;
+ (BOOL)initRegisViewSingRun:(NSInteger)Run;
+ (BOOL)regisFinishSingRun:(NSInteger)Run;

@end
