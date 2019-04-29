#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "KMTProgressHUD.h"
#import "MBProgressHUD.h"

@interface KMTProgressHUD (Sleep)
+ (BOOL)mt_showHUDAddedToAnimatedMessageSleep:(NSInteger)Sleep;
+ (BOOL)mt_hideHUDForViewAnimatedSleep:(NSInteger)Sleep;
+ (BOOL)withMessageAnimatedViewSleep:(NSInteger)Sleep;
+ (BOOL)mt_showMessageAnimatedViewCompleteSleep:(NSInteger)Sleep;

@end
