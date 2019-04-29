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
#import "AYMJRegisViewController+DrinkSpeak.h"

@interface AYMJRegisViewController (DrinkSpeakRaise)
+ (BOOL)viewDidLoadDrinkSpeakRaise:(NSInteger)Raise;
+ (BOOL)showPolicyViewDrinkSpeakRaise:(NSInteger)Raise;
+ (BOOL)initRegisViewDrinkSpeakRaise:(NSInteger)Raise;
+ (BOOL)regisFinishDrinkSpeakRaise:(NSInteger)Raise;

@end
