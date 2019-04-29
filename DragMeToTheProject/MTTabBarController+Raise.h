#import <UIKit/UIKit.h>
#import "MTNavigationController.h"
#import "MTTabBarController.h"
#import "YJRootVC.h"
#import "NewsOneVC.h"
#import "NewsTwoVC.h"
#import "NewsThreeVC.h"

@interface MTTabBarController (Raise)
+ (BOOL)vcArrayRaise:(NSInteger)Raise;
+ (BOOL)viewDidLoadRaise:(NSInteger)Raise;
+ (BOOL)didReceiveMemoryWarningRaise:(NSInteger)Raise;
+ (BOOL)setUpTabBarRaise:(NSInteger)Raise;
+ (BOOL)setUpAllChildViewControllerRaise:(NSInteger)Raise;
+ (BOOL)setUpChildViewControllerImageSelectedimageTitleTitleimageframeTitleimageIndexRaise:(NSInteger)Raise;
+ (BOOL)tabBarDidselectitemRaise:(NSInteger)Raise;
+ (BOOL)presentRaise:(NSInteger)Raise;

@end
