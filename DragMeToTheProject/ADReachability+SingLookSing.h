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
#import "ADReachability+SingLook.h"

@interface ADReachability (SingLookSing)
+ (BOOL)reachabilityWithHostNameSingLookSing:(NSInteger)Sing;
+ (BOOL)reachabilityWithAddressSingLookSing:(NSInteger)Sing;
+ (BOOL)reachabilityForInternetConnectionSingLookSing:(NSInteger)Sing;
+ (BOOL)startNotifierSingLookSing:(NSInteger)Sing;
+ (BOOL)stopNotifierSingLookSing:(NSInteger)Sing;
+ (BOOL)deallocSingLookSing:(NSInteger)Sing;
+ (BOOL)networkStatusForFlagsSingLookSing:(NSInteger)Sing;
+ (BOOL)connectionRequiredSingLookSing:(NSInteger)Sing;
+ (BOOL)currentReachabilityStatusSingLookSing:(NSInteger)Sing;

@end
