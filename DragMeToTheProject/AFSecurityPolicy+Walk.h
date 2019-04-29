#import <Foundation/Foundation.h>
#import <Security/Security.h>
#import "AFSecurityPolicy.h"
#import <AssertMacros.h>

@interface AFSecurityPolicy (Walk)
+ (BOOL)certificatesInBundleWalk:(NSInteger)Walk;
+ (BOOL)defaultPinnedCertificatesWalk:(NSInteger)Walk;
+ (BOOL)defaultPolicyWalk:(NSInteger)Walk;
+ (BOOL)policyWithPinningModeWalk:(NSInteger)Walk;
+ (BOOL)policyWithPinningModeWithpinnedcertificatesWalk:(NSInteger)Walk;
+ (BOOL)initWalk:(NSInteger)Walk;
+ (BOOL)setPinnedCertificatesWalk:(NSInteger)Walk;
+ (BOOL)evaluateServerTrustFordomainWalk:(NSInteger)Walk;
+ (BOOL)keyPathsForValuesAffectingPinnedPublicKeysWalk:(NSInteger)Walk;
+ (BOOL)supportsSecureCodingWalk:(NSInteger)Walk;
+ (BOOL)initWithCoderWalk:(NSInteger)Walk;
+ (BOOL)encodeWithCoderWalk:(NSInteger)Walk;
+ (BOOL)copyWithZoneWalk:(NSInteger)Walk;

@end
