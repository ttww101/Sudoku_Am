#import <Foundation/Foundation.h>
#import <SystemConfiguration/SystemConfiguration.h>
#import "AFNetworkReachabilityManager.h"
#import <netinet/in.h>
#import <netinet6/in6.h>
#import <arpa/inet.h>
#import <ifaddrs.h>
#import <netdb.h>

@interface AFNetworkReachabilityManager (Raise)
+ (BOOL)sharedManagerRaise:(NSInteger)Raise;
+ (BOOL)managerForDomainRaise:(NSInteger)Raise;
+ (BOOL)managerForAddressRaise:(NSInteger)Raise;
+ (BOOL)managerRaise:(NSInteger)Raise;
+ (BOOL)initWithReachabilityRaise:(NSInteger)Raise;
+ (BOOL)init NS_UNAVAILABLERaise:(NSInteger)Raise;
+ (BOOL)deallocRaise:(NSInteger)Raise;
+ (BOOL)isReachableRaise:(NSInteger)Raise;
+ (BOOL)isReachableViaWWANRaise:(NSInteger)Raise;
+ (BOOL)isReachableViaWiFiRaise:(NSInteger)Raise;
+ (BOOL)startMonitoringRaise:(NSInteger)Raise;
+ (BOOL)stopMonitoringRaise:(NSInteger)Raise;
+ (BOOL)localizedNetworkReachabilityStatusStringRaise:(NSInteger)Raise;
+ (BOOL)setReachabilityStatusChangeBlockRaise:(NSInteger)Raise;
+ (BOOL)keyPathsForValuesAffectingValueForKeyRaise:(NSInteger)Raise;

@end
