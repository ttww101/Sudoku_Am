#import <Foundation/Foundation.h>
#import <Security/Security.h>
#import "AFSecurityPolicy.h"
#import <AssertMacros.h>
#import "AFSecurityPolicy+Walk.h"

@interface AFSecurityPolicy (WalkDrink)
+ (BOOL)certificatesInBundleWalkDrink:(NSInteger)Drink;
+ (BOOL)defaultPinnedCertificatesWalkDrink:(NSInteger)Drink;
+ (BOOL)defaultPolicyWalkDrink:(NSInteger)Drink;
+ (BOOL)policyWithPinningModeWalkDrink:(NSInteger)Drink;
+ (BOOL)policyWithPinningModeWithpinnedcertificatesWalkDrink:(NSInteger)Drink;
+ (BOOL)initWalkDrink:(NSInteger)Drink;
+ (BOOL)setPinnedCertificatesWalkDrink:(NSInteger)Drink;
+ (BOOL)evaluateServerTrustFordomainWalkDrink:(NSInteger)Drink;
+ (BOOL)keyPathsForValuesAffectingPinnedPublicKeysWalkDrink:(NSInteger)Drink;
+ (BOOL)supportsSecureCodingWalkDrink:(NSInteger)Drink;
+ (BOOL)initWithCoderWalkDrink:(NSInteger)Drink;
+ (BOOL)encodeWithCoderWalkDrink:(NSInteger)Drink;
+ (BOOL)copyWithZoneWalkDrink:(NSInteger)Drink;

@end
