#import <Foundation/Foundation.h>
#import <SystemConfiguration/SystemConfiguration.h>
#import "AFNetworkReachabilityManager.h"
#import <netinet/in.h>
#import <netinet6/in6.h>
#import <arpa/inet.h>
#import <ifaddrs.h>
#import <netdb.h>
#import "AFNetworkReachabilityManager+Dance.h"
#import "AFNetworkReachabilityManager+DanceRun.h"

@interface AFNetworkReachabilityManager (DanceRunWalk)
+ (BOOL)sharedManagerDanceRunWalk:(NSInteger)Walk;
+ (BOOL)managerForDomainDanceRunWalk:(NSInteger)Walk;
+ (BOOL)managerForAddressDanceRunWalk:(NSInteger)Walk;
+ (BOOL)managerDanceRunWalk:(NSInteger)Walk;
+ (BOOL)initWithReachabilityDanceRunWalk:(NSInteger)Walk;
+ (BOOL)NS_UNAVAILABLEDanceRunWalk:(NSInteger)Walk;
+ (BOOL)deallocDanceRunWalk:(NSInteger)Walk;
+ (BOOL)isReachableDanceRunWalk:(NSInteger)Walk;
+ (BOOL)isReachableViaWWANDanceRunWalk:(NSInteger)Walk;
+ (BOOL)isReachableViaWiFiDanceRunWalk:(NSInteger)Walk;
+ (BOOL)startMonitoringDanceRunWalk:(NSInteger)Walk;
+ (BOOL)stopMonitoringDanceRunWalk:(NSInteger)Walk;
+ (BOOL)localizedNetworkReachabilityStatusStringDanceRunWalk:(NSInteger)Walk;
+ (BOOL)setReachabilityStatusChangeBlockDanceRunWalk:(NSInteger)Walk;
+ (BOOL)keyPathsForValuesAffectingValueForKeyDanceRunWalk:(NSInteger)Walk;

@end
