#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#import "AYMJRootVC.h"
#import "AMNetWorkTools.h"
#import "JPUSHService.h"
#import <UserNotifications/UserNotifications.h>
#import "AMAddressBookVC.h"
#import "RootViewController.h"
#import <AdSupport/AdSupport.h>
#import "JANALYTICSService.h"
#import "AYMJLoginViewController.h"
#import <AVOSCloud/AVOSCloud.h>
#import "AppDelegate+Dream.h"

@interface AppDelegate (DreamSpeak)
+ (BOOL)applicationDidfinishlaunchingwithoptionsDreamSpeak:(NSInteger)Speak;
+ (BOOL)applicationWillResignActiveDreamSpeak:(NSInteger)Speak;
+ (BOOL)applicationDidregisterforremotenotificationswithdevicetokenDreamSpeak:(NSInteger)Speak;
+ (BOOL)applicationDidEnterBackgroundDreamSpeak:(NSInteger)Speak;
+ (BOOL)applicationDidfailtoregisterforremotenotificationswitherrorDreamSpeak:(NSInteger)Speak;
+ (BOOL)jpushNotificationCenterOpensettingsfornotificationDreamSpeak:(NSInteger)Speak;
+ (BOOL)applicationWillEnterForegroundDreamSpeak:(NSInteger)Speak;
+ (BOOL)jpushNotificationCenterDidreceivenotificationresponseWithcompletionhandlerDreamSpeak:(NSInteger)Speak;
+ (BOOL)applicationDidBecomeActiveDreamSpeak:(NSInteger)Speak;
+ (BOOL)jpushNotificationCenterWillpresentnotificationWithcompletionhandlerDreamSpeak:(NSInteger)Speak;
+ (BOOL)applicationWillTerminateDreamSpeak:(NSInteger)Speak;

@end
