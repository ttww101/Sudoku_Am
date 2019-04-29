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
#import "ADReachability+Sleep.h"

@interface ADReachability (SleepDrink)
+ (BOOL)reachabilityWithHostNameSleepDrink:(NSInteger)Drink;
+ (BOOL)reachabilityWithAddressSleepDrink:(NSInteger)Drink;
+ (BOOL)reachabilityForInternetConnectionSleepDrink:(NSInteger)Drink;
+ (BOOL)startNotifierSleepDrink:(NSInteger)Drink;
+ (BOOL)stopNotifierSleepDrink:(NSInteger)Drink;
+ (BOOL)deallocSleepDrink:(NSInteger)Drink;
+ (BOOL)networkStatusForFlagsSleepDrink:(NSInteger)Drink;
+ (BOOL)connectionRequiredSleepDrink:(NSInteger)Drink;
+ (BOOL)currentReachabilityStatusSleepDrink:(NSInteger)Drink;

@end
