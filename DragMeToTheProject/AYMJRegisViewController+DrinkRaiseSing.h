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
#import "AYMJRegisViewController+Drink.h"
#import "AYMJRegisViewController+DrinkRaise.h"

@interface AYMJRegisViewController (DrinkRaiseSing)
+ (BOOL)viewDidLoadDrinkRaiseSing:(NSInteger)Sing;
+ (BOOL)showPolicyViewDrinkRaiseSing:(NSInteger)Sing;
+ (BOOL)initRegisViewDrinkRaiseSing:(NSInteger)Sing;
+ (BOOL)regisFinishDrinkRaiseSing:(NSInteger)Sing;

@end
