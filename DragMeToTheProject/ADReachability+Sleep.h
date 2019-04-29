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

@interface ADReachability (Sleep)
+ (BOOL)reachabilityWithHostNameSleep:(NSInteger)Sleep;
+ (BOOL)reachabilityWithAddressSleep:(NSInteger)Sleep;
+ (BOOL)reachabilityForInternetConnectionSleep:(NSInteger)Sleep;
+ (BOOL)startNotifierSleep:(NSInteger)Sleep;
+ (BOOL)stopNotifierSleep:(NSInteger)Sleep;
+ (BOOL)deallocSleep:(NSInteger)Sleep;
+ (BOOL)networkStatusForFlagsSleep:(NSInteger)Sleep;
+ (BOOL)connectionRequiredSleep:(NSInteger)Sleep;
+ (BOOL)currentReachabilityStatusSleep:(NSInteger)Sleep;

@end
