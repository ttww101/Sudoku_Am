#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "KMTProgressHUD.h"
#import "MBProgressHUD.h"
#import "KMTProgressHUD+Sleep.h"

@interface KMTProgressHUD (SleepLook)
+ (BOOL)mt_showHUDAddedToAnimatedMessageSleepLook:(NSInteger)Look;
+ (BOOL)mt_hideHUDForViewAnimatedSleepLook:(NSInteger)Look;
+ (BOOL)withMessageAnimatedViewSleepLook:(NSInteger)Look;
+ (BOOL)mt_showMessageAnimatedViewCompleteSleepLook:(NSInteger)Look;

@end
