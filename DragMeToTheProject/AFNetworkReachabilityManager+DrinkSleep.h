#import <Foundation/Foundation.h>
#import <SystemConfiguration/SystemConfiguration.h>
#import "AFNetworkReachabilityManager.h"
#import <netinet/in.h>
#import <netinet6/in6.h>
#import <arpa/inet.h>
#import <ifaddrs.h>
#import <netdb.h>
#import "AFNetworkReachabilityManager+Drink.h"

@interface AFNetworkReachabilityManager (DrinkSleep)
+ (BOOL)sharedManagerDrinkSleep:(NSInteger)Sleep;
+ (BOOL)managerForDomainDrinkSleep:(NSInteger)Sleep;
+ (BOOL)managerForAddressDrinkSleep:(NSInteger)Sleep;
+ (BOOL)managerDrinkSleep:(NSInteger)Sleep;
+ (BOOL)initWithReachabilityDrinkSleep:(NSInteger)Sleep;
+ (BOOL)NS_UNAVAILABLEDrinkSleep:(NSInteger)Sleep;
+ (BOOL)deallocDrinkSleep:(NSInteger)Sleep;
+ (BOOL)isReachableDrinkSleep:(NSInteger)Sleep;
+ (BOOL)isReachableViaWWANDrinkSleep:(NSInteger)Sleep;
+ (BOOL)isReachableViaWiFiDrinkSleep:(NSInteger)Sleep;
+ (BOOL)startMonitoringDrinkSleep:(NSInteger)Sleep;
+ (BOOL)stopMonitoringDrinkSleep:(NSInteger)Sleep;
+ (BOOL)localizedNetworkReachabilityStatusStringDrinkSleep:(NSInteger)Sleep;
+ (BOOL)setReachabilityStatusChangeBlockDrinkSleep:(NSInteger)Sleep;
+ (BOOL)keyPathsForValuesAffectingValueForKeyDrinkSleep:(NSInteger)Sleep;

@end
