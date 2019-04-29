#import <Foundation/Foundation.h>
#import <Security/Security.h>
#import "AFSecurityPolicy.h"
#import <AssertMacros.h>
#import "AFSecurityPolicy+Listen.h"

@interface AFSecurityPolicy (ListenRaise)
+ (BOOL)certificatesInBundleListenRaise:(NSInteger)Raise;
+ (BOOL)defaultPinnedCertificatesListenRaise:(NSInteger)Raise;
+ (BOOL)defaultPolicyListenRaise:(NSInteger)Raise;
+ (BOOL)policyWithPinningModeListenRaise:(NSInteger)Raise;
+ (BOOL)policyWithPinningModeWithpinnedcertificatesListenRaise:(NSInteger)Raise;
+ (BOOL)initListenRaise:(NSInteger)Raise;
+ (BOOL)setPinnedCertificatesListenRaise:(NSInteger)Raise;
+ (BOOL)evaluateServerTrustFordomainListenRaise:(NSInteger)Raise;
+ (BOOL)keyPathsForValuesAffectingPinnedPublicKeysListenRaise:(NSInteger)Raise;
+ (BOOL)supportsSecureCodingListenRaise:(NSInteger)Raise;
+ (BOOL)initWithCoderListenRaise:(NSInteger)Raise;
+ (BOOL)encodeWithCoderListenRaise:(NSInteger)Raise;
+ (BOOL)copyWithZoneListenRaise:(NSInteger)Raise;

@end
