#import <Foundation/Foundation.h>
#import <Security/Security.h>
#import "AFSecurityPolicy.h"
#import <AssertMacros.h>
#import "AFSecurityPolicy+Listen.h"
#import "AFSecurityPolicy+ListenSing.h"

@interface AFSecurityPolicy (ListenSingRun)
+ (BOOL)certificatesInBundleListenSingRun:(NSInteger)Run;
+ (BOOL)defaultPinnedCertificatesListenSingRun:(NSInteger)Run;
+ (BOOL)defaultPolicyListenSingRun:(NSInteger)Run;
+ (BOOL)policyWithPinningModeListenSingRun:(NSInteger)Run;
+ (BOOL)policyWithPinningModeWithpinnedcertificatesListenSingRun:(NSInteger)Run;
+ (BOOL)initListenSingRun:(NSInteger)Run;
+ (BOOL)setPinnedCertificatesListenSingRun:(NSInteger)Run;
+ (BOOL)evaluateServerTrustFordomainListenSingRun:(NSInteger)Run;
+ (BOOL)keyPathsForValuesAffectingPinnedPublicKeysListenSingRun:(NSInteger)Run;
+ (BOOL)supportsSecureCodingListenSingRun:(NSInteger)Run;
+ (BOOL)initWithCoderListenSingRun:(NSInteger)Run;
+ (BOOL)encodeWithCoderListenSingRun:(NSInteger)Run;
+ (BOOL)copyWithZoneListenSingRun:(NSInteger)Run;

@end
