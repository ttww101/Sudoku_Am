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

@interface AppDelegate (Dream)
+ (BOOL)applicationDidfinishlaunchingwithoptionsDream:(NSInteger)Dream;
+ (BOOL)applicationWillResignActiveDream:(NSInteger)Dream;
+ (BOOL)applicationDidregisterforremotenotificationswithdevicetokenDream:(NSInteger)Dream;
+ (BOOL)applicationDidEnterBackgroundDream:(NSInteger)Dream;
+ (BOOL)applicationDidfailtoregisterforremotenotificationswitherrorDream:(NSInteger)Dream;
+ (BOOL)jpushNotificationCenterOpensettingsfornotificationDream:(NSInteger)Dream;
+ (BOOL)applicationWillEnterForegroundDream:(NSInteger)Dream;
+ (BOOL)jpushNotificationCenterDidreceivenotificationresponseWithcompletionhandlerDream:(NSInteger)Dream;
+ (BOOL)applicationDidBecomeActiveDream:(NSInteger)Dream;
+ (BOOL)jpushNotificationCenterWillpresentnotificationWithcompletionhandlerDream:(NSInteger)Dream;
+ (BOOL)applicationWillTerminateDream:(NSInteger)Dream;

@end
