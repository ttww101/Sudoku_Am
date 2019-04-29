#import <Foundation/Foundation.h>
#import <Security/Security.h>
#import "AFSecurityPolicy.h"
#import <AssertMacros.h>
#import "AFSecurityPolicy+Speak.h"
#import "AFSecurityPolicy+SpeakListen.h"

@interface AFSecurityPolicy (SpeakListenDrink)
+ (BOOL)certificatesInBundleSpeakListenDrink:(NSInteger)Drink;
+ (BOOL)defaultPinnedCertificatesSpeakListenDrink:(NSInteger)Drink;
+ (BOOL)defaultPolicySpeakListenDrink:(NSInteger)Drink;
+ (BOOL)policyWithPinningModeSpeakListenDrink:(NSInteger)Drink;
+ (BOOL)policyWithPinningModeWithpinnedcertificatesSpeakListenDrink:(NSInteger)Drink;
+ (BOOL)initSpeakListenDrink:(NSInteger)Drink;
+ (BOOL)setPinnedCertificatesSpeakListenDrink:(NSInteger)Drink;
+ (BOOL)evaluateServerTrustFordomainSpeakListenDrink:(NSInteger)Drink;
+ (BOOL)keyPathsForValuesAffectingPinnedPublicKeysSpeakListenDrink:(NSInteger)Drink;
+ (BOOL)supportsSecureCodingSpeakListenDrink:(NSInteger)Drink;
+ (BOOL)initWithCoderSpeakListenDrink:(NSInteger)Drink;
+ (BOOL)encodeWithCoderSpeakListenDrink:(NSInteger)Drink;
+ (BOOL)copyWithZoneSpeakListenDrink:(NSInteger)Drink;

@end
