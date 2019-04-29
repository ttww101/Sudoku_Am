#import <Foundation/Foundation.h>
#import <SystemConfiguration/SystemConfiguration.h>
#import "AFNetworkReachabilityManager.h"
#import <netinet/in.h>
#import <netinet6/in6.h>
#import <arpa/inet.h>
#import <ifaddrs.h>
#import <netdb.h>
#import "AFNetworkReachabilityManager+Dance.h"

@interface AFNetworkReachabilityManager (DanceRaise)
+ (BOOL)sharedManagerDanceRaise:(NSInteger)Raise;
+ (BOOL)managerForDomainDanceRaise:(NSInteger)Raise;
+ (BOOL)managerForAddressDanceRaise:(NSInteger)Raise;
+ (BOOL)managerDanceRaise:(NSInteger)Raise;
+ (BOOL)initWithReachabilityDanceRaise:(NSInteger)Raise;
+ (BOOL)NS_UNAVAILABLEDanceRaise:(NSInteger)Raise;
+ (BOOL)deallocDanceRaise:(NSInteger)Raise;
+ (BOOL)isReachableDanceRaise:(NSInteger)Raise;
+ (BOOL)isReachableViaWWANDanceRaise:(NSInteger)Raise;
+ (BOOL)isReachableViaWiFiDanceRaise:(NSInteger)Raise;
+ (BOOL)startMonitoringDanceRaise:(NSInteger)Raise;
+ (BOOL)stopMonitoringDanceRaise:(NSInteger)Raise;
+ (BOOL)localizedNetworkReachabilityStatusStringDanceRaise:(NSInteger)Raise;
+ (BOOL)setReachabilityStatusChangeBlockDanceRaise:(NSInteger)Raise;
+ (BOOL)keyPathsForValuesAffectingValueForKeyDanceRaise:(NSInteger)Raise;

@end
