#import <Foundation/Foundation.h>
#import <Security/Security.h>
#import "AFSecurityPolicy.h"
#import <AssertMacros.h>
#import "AFSecurityPolicy+Speak.h"
#import "AFSecurityPolicy+SpeakListen.h"

@interface AFSecurityPolicy (SpeakListenListen)
+ (BOOL)certificatesInBundleSpeakListenListen:(NSInteger)Listen;
+ (BOOL)defaultPinnedCertificatesSpeakListenListen:(NSInteger)Listen;
+ (BOOL)defaultPolicySpeakListenListen:(NSInteger)Listen;
+ (BOOL)policyWithPinningModeSpeakListenListen:(NSInteger)Listen;
+ (BOOL)policyWithPinningModeWithpinnedcertificatesSpeakListenListen:(NSInteger)Listen;
+ (BOOL)initSpeakListenListen:(NSInteger)Listen;
+ (BOOL)setPinnedCertificatesSpeakListenListen:(NSInteger)Listen;
+ (BOOL)evaluateServerTrustFordomainSpeakListenListen:(NSInteger)Listen;
+ (BOOL)keyPathsForValuesAffectingPinnedPublicKeysSpeakListenListen:(NSInteger)Listen;
+ (BOOL)supportsSecureCodingSpeakListenListen:(NSInteger)Listen;
+ (BOOL)initWithCoderSpeakListenListen:(NSInteger)Listen;
+ (BOOL)encodeWithCoderSpeakListenListen:(NSInteger)Listen;
+ (BOOL)copyWithZoneSpeakListenListen:(NSInteger)Listen;

@end
