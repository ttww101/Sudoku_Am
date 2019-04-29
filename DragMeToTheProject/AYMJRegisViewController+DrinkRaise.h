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

@interface AYMJRegisViewController (DrinkRaise)
+ (BOOL)viewDidLoadDrinkRaise:(NSInteger)Raise;
+ (BOOL)showPolicyViewDrinkRaise:(NSInteger)Raise;
+ (BOOL)initRegisViewDrinkRaise:(NSInteger)Raise;
+ (BOOL)regisFinishDrinkRaise:(NSInteger)Raise;

@end
