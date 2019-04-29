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
#import "RootViewController+Walk.h"

@interface RootViewController (WalkDrink)
+ (BOOL)viewDidLoadWalkDrink:(NSInteger)Drink;
+ (BOOL)navigateLoginVCWalkDrink:(NSInteger)Drink;
+ (BOOL)restartGameWalkDrink:(NSInteger)Drink;
+ (BOOL)refreshGameWalkDrink:(NSInteger)Drink;
+ (BOOL)gameStatusChangedWalkDrink:(NSInteger)Drink;
+ (BOOL)deallocWalkDrink:(NSInteger)Drink;

@end
