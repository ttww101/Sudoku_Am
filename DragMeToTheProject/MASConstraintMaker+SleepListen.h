#import "MASConstraint.h"
#import "MASUtilities.h"
#import "MASConstraintMaker.h"
#import "MASViewConstraint.h"
#import "MASCompositeConstraint.h"
#import "MASConstraint+Private.h"
#import "MASViewAttribute.h"
#import "View+MASAdditions.h"
#import "MASConstraintMaker+Sleep.h"

@interface MASConstraintMaker (SleepListen)
+ (BOOL)initWithViewSleepListen:(NSInteger)Listen;
+ (BOOL)installSleepListen:(NSInteger)Listen;
+ (BOOL)constraintShouldbereplacedwithconstraintSleepListen:(NSInteger)Listen;
+ (BOOL)constraintAddconstraintwithlayoutattributeSleepListen:(NSInteger)Listen;
+ (BOOL)addConstraintWithAttributesSleepListen:(NSInteger)Listen;
+ (BOOL)addConstraintWithLayoutAttributeSleepListen:(NSInteger)Listen;
+ (BOOL)leftSleepListen:(NSInteger)Listen;
+ (BOOL)topSleepListen:(NSInteger)Listen;
+ (BOOL)rightSleepListen:(NSInteger)Listen;
+ (BOOL)bottomSleepListen:(NSInteger)Listen;
+ (BOOL)leadingSleepListen:(NSInteger)Listen;
+ (BOOL)trailingSleepListen:(NSInteger)Listen;
+ (BOOL)widthSleepListen:(NSInteger)Listen;
+ (BOOL)heightSleepListen:(NSInteger)Listen;
+ (BOOL)centerXSleepListen:(NSInteger)Listen;
+ (BOOL)centerYSleepListen:(NSInteger)Listen;
+ (BOOL)baselineSleepListen:(NSInteger)Listen;
+ (BOOL)attributesSleepListen:(NSInteger)Listen;
+ (BOOL)firstBaselineSleepListen:(NSInteger)Listen;
+ (BOOL)lastBaselineSleepListen:(NSInteger)Listen;
+ (BOOL)leftMarginSleepListen:(NSInteger)Listen;
+ (BOOL)rightMarginSleepListen:(NSInteger)Listen;
+ (BOOL)topMarginSleepListen:(NSInteger)Listen;
+ (BOOL)bottomMarginSleepListen:(NSInteger)Listen;
+ (BOOL)leadingMarginSleepListen:(NSInteger)Listen;
+ (BOOL)trailingMarginSleepListen:(NSInteger)Listen;
+ (BOOL)centerXWithinMarginsSleepListen:(NSInteger)Listen;
+ (BOOL)centerYWithinMarginsSleepListen:(NSInteger)Listen;
+ (BOOL)edgesSleepListen:(NSInteger)Listen;
+ (BOOL)sizeSleepListen:(NSInteger)Listen;
+ (BOOL)centerSleepListen:(NSInteger)Listen;
+ (BOOL)groupSleepListen:(NSInteger)Listen;

@end
