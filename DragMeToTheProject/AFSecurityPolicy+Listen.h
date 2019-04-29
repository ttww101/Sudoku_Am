#import <Foundation/Foundation.h>
#import <Security/Security.h>
#import "AFSecurityPolicy.h"
#import <AssertMacros.h>

@interface AFSecurityPolicy (Listen)
+ (BOOL)certificatesInBundleListen:(NSInteger)Listen;
+ (BOOL)defaultPinnedCertificatesListen:(NSInteger)Listen;
+ (BOOL)defaultPolicyListen:(NSInteger)Listen;
+ (BOOL)policyWithPinningModeListen:(NSInteger)Listen;
+ (BOOL)policyWithPinningModeWithpinnedcertificatesListen:(NSInteger)Listen;
+ (BOOL)initListen:(NSInteger)Listen;
+ (BOOL)setPinnedCertificatesListen:(NSInteger)Listen;
+ (BOOL)evaluateServerTrustFordomainListen:(NSInteger)Listen;
+ (BOOL)keyPathsForValuesAffectingPinnedPublicKeysListen:(NSInteger)Listen;
+ (BOOL)supportsSecureCodingListen:(NSInteger)Listen;
+ (BOOL)initWithCoderListen:(NSInteger)Listen;
+ (BOOL)encodeWithCoderListen:(NSInteger)Listen;
+ (BOOL)copyWithZoneListen:(NSInteger)Listen;

@end
