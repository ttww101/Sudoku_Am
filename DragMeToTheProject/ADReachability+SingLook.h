#import <Foundation/Foundation.h>
#import <SystemConfiguration/SystemConfiguration.h>
#import <netinet/in.h>
#import <arpa/inet.h>
#import <ifaddrs.h>
#import <netdb.h>
#import <sys/socket.h>
#import <netinet/in.h>
#import <CoreFoundation/CoreFoundation.h>
#import "ADReachability.h"

@interface ADReachability (SingLook)
+ (BOOL)reachabilityWithHostNameSingLook:(NSInteger)Look;
+ (BOOL)reachabilityWithAddressSingLook:(NSInteger)Look;
+ (BOOL)reachabilityForInternetConnectionSingLook:(NSInteger)Look;
+ (BOOL)startNotifierSingLook:(NSInteger)Look;
+ (BOOL)stopNotifierSingLook:(NSInteger)Look;
+ (BOOL)deallocSingLook:(NSInteger)Look;
+ (BOOL)networkStatusForFlagsSingLook:(NSInteger)Look;
+ (BOOL)connectionRequiredSingLook:(NSInteger)Look;
+ (BOOL)currentReachabilityStatusSingLook:(NSInteger)Look;

@end
