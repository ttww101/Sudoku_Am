#import <UIKit/UIKit.h>
#import "MTNavigationController.h"
#import "MTTabBarController.h"
#import "YJRootVC.h"
#import "NewsOneVC.h"
#import "NewsTwoVC.h"
#import "NewsThreeVC.h"
#import "MTTabBarController+Raise.h"

@interface MTTabBarController (RaiseSleep)
+ (BOOL)vcArrayRaiseSleep:(NSInteger)Sleep;
+ (BOOL)viewDidLoadRaiseSleep:(NSInteger)Sleep;
+ (BOOL)didReceiveMemoryWarningRaiseSleep:(NSInteger)Sleep;
+ (BOOL)setUpTabBarRaiseSleep:(NSInteger)Sleep;
+ (BOOL)setUpAllChildViewControllerRaiseSleep:(NSInteger)Sleep;
+ (BOOL)setUpChildViewControllerImageSelectedimageTitleTitleimageframeTitleimageIndexRaiseSleep:(NSInteger)Sleep;
+ (BOOL)tabBarDidselectitemRaiseSleep:(NSInteger)Sleep;
+ (BOOL)presentRaiseSleep:(NSInteger)Sleep;

@end
