#import <Foundation/Foundation.h>
#import <SystemConfiguration/SystemConfiguration.h>
#import "AFNetworkReachabilityManager.h"
#import <netinet/in.h>
#import <netinet6/in6.h>
#import <arpa/inet.h>
#import <ifaddrs.h>
#import <netdb.h>
#import "AFNetworkReachabilityManager+Speak.h"

@interface AFNetworkReachabilityManager (SpeakListen)
+ (BOOL)sharedManagerSpeakListen:(NSInteger)Listen;
+ (BOOL)managerForDomainSpeakListen:(NSInteger)Listen;
+ (BOOL)managerForAddressSpeakListen:(NSInteger)Listen;
+ (BOOL)managerSpeakListen:(NSInteger)Listen;
+ (BOOL)initWithReachabilitySpeakListen:(NSInteger)Listen;
+ (BOOL)NS_UNAVAILABLESpeakListen:(NSInteger)Listen;
+ (BOOL)deallocSpeakListen:(NSInteger)Listen;
+ (BOOL)isReachableSpeakListen:(NSInteger)Listen;
+ (BOOL)isReachableViaWWANSpeakListen:(NSInteger)Listen;
+ (BOOL)isReachableViaWiFiSpeakListen:(NSInteger)Listen;
+ (BOOL)startMonitoringSpeakListen:(NSInteger)Listen;
+ (BOOL)stopMonitoringSpeakListen:(NSInteger)Listen;
+ (BOOL)localizedNetworkReachabilityStatusStringSpeakListen:(NSInteger)Listen;
+ (BOOL)setReachabilityStatusChangeBlockSpeakListen:(NSInteger)Listen;
+ (BOOL)keyPathsForValuesAffectingValueForKeySpeakListen:(NSInteger)Listen;

@end
