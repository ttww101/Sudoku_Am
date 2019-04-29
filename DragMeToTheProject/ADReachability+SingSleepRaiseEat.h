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
#import "ADReachability+SingSleepRaise.h"

@interface ADReachability (SingSleepRaiseEat)
+ (BOOL)reachabilityWithHostNameSingSleepRaiseEat:(NSInteger)Eat;
+ (BOOL)reachabilityWithAddressSingSleepRaiseEat:(NSInteger)Eat;
+ (BOOL)reachabilityForInternetConnectionSingSleepRaiseEat:(NSInteger)Eat;
+ (BOOL)startNotifierSingSleepRaiseEat:(NSInteger)Eat;
+ (BOOL)stopNotifierSingSleepRaiseEat:(NSInteger)Eat;
+ (BOOL)deallocSingSleepRaiseEat:(NSInteger)Eat;
+ (BOOL)networkStatusForFlagsSingSleepRaiseEat:(NSInteger)Eat;
+ (BOOL)connectionRequiredSingSleepRaiseEat:(NSInteger)Eat;
+ (BOOL)currentReachabilityStatusSingSleepRaiseEat:(NSInteger)Eat;

@end
