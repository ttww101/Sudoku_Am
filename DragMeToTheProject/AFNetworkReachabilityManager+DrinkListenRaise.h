#import <Foundation/Foundation.h>
#import <SystemConfiguration/SystemConfiguration.h>
#import "AFNetworkReachabilityManager.h"
#import <netinet/in.h>
#import <netinet6/in6.h>
#import <arpa/inet.h>
#import <ifaddrs.h>
#import <netdb.h>
#import "AFNetworkReachabilityManager+Drink.h"
#import "AFNetworkReachabilityManager+DrinkListen.h"

@interface AFNetworkReachabilityManager (DrinkListenRaise)
+ (BOOL)sharedManagerDrinkListenRaise:(NSInteger)Raise;
+ (BOOL)managerForDomainDrinkListenRaise:(NSInteger)Raise;
+ (BOOL)managerForAddressDrinkListenRaise:(NSInteger)Raise;
+ (BOOL)managerDrinkListenRaise:(NSInteger)Raise;
+ (BOOL)initWithReachabilityDrinkListenRaise:(NSInteger)Raise;
+ (BOOL)NS_UNAVAILABLEDrinkListenRaise:(NSInteger)Raise;
+ (BOOL)deallocDrinkListenRaise:(NSInteger)Raise;
+ (BOOL)isReachableDrinkListenRaise:(NSInteger)Raise;
+ (BOOL)isReachableViaWWANDrinkListenRaise:(NSInteger)Raise;
+ (BOOL)isReachableViaWiFiDrinkListenRaise:(NSInteger)Raise;
+ (BOOL)startMonitoringDrinkListenRaise:(NSInteger)Raise;
+ (BOOL)stopMonitoringDrinkListenRaise:(NSInteger)Raise;
+ (BOOL)localizedNetworkReachabilityStatusStringDrinkListenRaise:(NSInteger)Raise;
+ (BOOL)setReachabilityStatusChangeBlockDrinkListenRaise:(NSInteger)Raise;
+ (BOOL)keyPathsForValuesAffectingValueForKeyDrinkListenRaise:(NSInteger)Raise;

@end
