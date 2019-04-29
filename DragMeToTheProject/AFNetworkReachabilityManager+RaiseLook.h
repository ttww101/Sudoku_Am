#import <Foundation/Foundation.h>
#import <SystemConfiguration/SystemConfiguration.h>
#import "AFNetworkReachabilityManager.h"
#import <netinet/in.h>
#import <netinet6/in6.h>
#import <arpa/inet.h>
#import <ifaddrs.h>
#import <netdb.h>
#import "AFNetworkReachabilityManager+Raise.h"

@interface AFNetworkReachabilityManager (RaiseLook)
+ (BOOL)sharedManagerRaiseLook:(NSInteger)Look;
+ (BOOL)managerForDomainRaiseLook:(NSInteger)Look;
+ (BOOL)managerForAddressRaiseLook:(NSInteger)Look;
+ (BOOL)managerRaiseLook:(NSInteger)Look;
+ (BOOL)initWithReachabilityRaiseLook:(NSInteger)Look;
+ (BOOL)NS_UNAVAILABLERaiseLook:(NSInteger)Look;
+ (BOOL)deallocRaiseLook:(NSInteger)Look;
+ (BOOL)isReachableRaiseLook:(NSInteger)Look;
+ (BOOL)isReachableViaWWANRaiseLook:(NSInteger)Look;
+ (BOOL)isReachableViaWiFiRaiseLook:(NSInteger)Look;
+ (BOOL)startMonitoringRaiseLook:(NSInteger)Look;
+ (BOOL)stopMonitoringRaiseLook:(NSInteger)Look;
+ (BOOL)localizedNetworkReachabilityStatusStringRaiseLook:(NSInteger)Look;
+ (BOOL)setReachabilityStatusChangeBlockRaiseLook:(NSInteger)Look;
+ (BOOL)keyPathsForValuesAffectingValueForKeyRaiseLook:(NSInteger)Look;

@end
