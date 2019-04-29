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

@interface ADReachability (SingSleepRaise)
+ (BOOL)reachabilityWithHostNameSingSleepRaise:(NSInteger)Raise;
+ (BOOL)reachabilityWithAddressSingSleepRaise:(NSInteger)Raise;
+ (BOOL)reachabilityForInternetConnectionSingSleepRaise:(NSInteger)Raise;
+ (BOOL)startNotifierSingSleepRaise:(NSInteger)Raise;
+ (BOOL)stopNotifierSingSleepRaise:(NSInteger)Raise;
+ (BOOL)deallocSingSleepRaise:(NSInteger)Raise;
+ (BOOL)networkStatusForFlagsSingSleepRaise:(NSInteger)Raise;
+ (BOOL)connectionRequiredSingSleepRaise:(NSInteger)Raise;
+ (BOOL)currentReachabilityStatusSingSleepRaise:(NSInteger)Raise;

@end
