#import <UIKit/UIKit.h>
#import "RootViewController.h"
#import "UIView+AMZHView.h"
#import "AMAddressBookVC.h"
#import "AmSudukuGameView.h"
#import "AYMJLoginViewController.h"
#import "UIView+Constraint.h"
#import "AMURLSessionManager.h"
#import "ADWebViewController.h"
#import "NSString+URL.h"

@interface RootViewController (Walk)
+ (BOOL)viewDidLoadWalk:(NSInteger)Walk;
+ (BOOL)navigateLoginVCWalk:(NSInteger)Walk;
+ (BOOL)restartGameWalk:(NSInteger)Walk;
+ (BOOL)refreshGameWalk:(NSInteger)Walk;
+ (BOOL)gameStatusChangedWalk:(NSInteger)Walk;
+ (BOOL)deallocWalk:(NSInteger)Walk;

@end
