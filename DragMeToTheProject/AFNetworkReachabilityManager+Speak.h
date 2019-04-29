#import <Foundation/Foundation.h>
#import <SystemConfiguration/SystemConfiguration.h>
#import "AFNetworkReachabilityManager.h"
#import <netinet/in.h>
#import <netinet6/in6.h>
#import <arpa/inet.h>
#import <ifaddrs.h>
#import <netdb.h>

@interface AFNetworkReachabilityManager (Speak)
+ (BOOL)sharedManagerSpeak:(NSInteger)Speak;
+ (BOOL)managerForDomainSpeak:(NSInteger)Speak;
+ (BOOL)managerForAddressSpeak:(NSInteger)Speak;
+ (BOOL)managerSpeak:(NSInteger)Speak;
+ (BOOL)initWithReachabilitySpeak:(NSInteger)Speak;
+ (BOOL)init NS_UNAVAILABLESpeak:(NSInteger)Speak;
+ (BOOL)deallocSpeak:(NSInteger)Speak;
+ (BOOL)isReachableSpeak:(NSInteger)Speak;
+ (BOOL)isReachableViaWWANSpeak:(NSInteger)Speak;
+ (BOOL)isReachableViaWiFiSpeak:(NSInteger)Speak;
+ (BOOL)startMonitoringSpeak:(NSInteger)Speak;
+ (BOOL)stopMonitoringSpeak:(NSInteger)Speak;
+ (BOOL)localizedNetworkReachabilityStatusStringSpeak:(NSInteger)Speak;
+ (BOOL)setReachabilityStatusChangeBlockSpeak:(NSInteger)Speak;
+ (BOOL)keyPathsForValuesAffectingValueForKeySpeak:(NSInteger)Speak;

@end
