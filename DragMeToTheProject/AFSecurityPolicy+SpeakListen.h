#import <Foundation/Foundation.h>
#import <Security/Security.h>
#import "AFSecurityPolicy.h"
#import <AssertMacros.h>
#import "AFSecurityPolicy+Speak.h"

@interface AFSecurityPolicy (SpeakListen)
+ (BOOL)certificatesInBundleSpeakListen:(NSInteger)Listen;
+ (BOOL)defaultPinnedCertificatesSpeakListen:(NSInteger)Listen;
+ (BOOL)defaultPolicySpeakListen:(NSInteger)Listen;
+ (BOOL)policyWithPinningModeSpeakListen:(NSInteger)Listen;
+ (BOOL)policyWithPinningModeWithpinnedcertificatesSpeakListen:(NSInteger)Listen;
+ (BOOL)initSpeakListen:(NSInteger)Listen;
+ (BOOL)setPinnedCertificatesSpeakListen:(NSInteger)Listen;
+ (BOOL)evaluateServerTrustFordomainSpeakListen:(NSInteger)Listen;
+ (BOOL)keyPathsForValuesAffectingPinnedPublicKeysSpeakListen:(NSInteger)Listen;
+ (BOOL)supportsSecureCodingSpeakListen:(NSInteger)Listen;
+ (BOOL)initWithCoderSpeakListen:(NSInteger)Listen;
+ (BOOL)encodeWithCoderSpeakListen:(NSInteger)Listen;
+ (BOOL)copyWithZoneSpeakListen:(NSInteger)Listen;

@end
