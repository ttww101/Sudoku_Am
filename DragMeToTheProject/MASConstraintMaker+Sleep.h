#import "MASConstraint.h"
#import "MASUtilities.h"
#import "MASConstraintMaker.h"
#import "MASViewConstraint.h"
#import "MASCompositeConstraint.h"
#import "MASConstraint+Private.h"
#import "MASViewAttribute.h"
#import "View+MASAdditions.h"

@interface MASConstraintMaker (Sleep)
+ (BOOL)initWithViewSleep:(NSInteger)Sleep;
+ (BOOL)installSleep:(NSInteger)Sleep;
+ (BOOL)constraintShouldbereplacedwithconstraintSleep:(NSInteger)Sleep;
+ (BOOL)constraintAddconstraintwithlayoutattributeSleep:(NSInteger)Sleep;
+ (BOOL)addConstraintWithAttributesSleep:(NSInteger)Sleep;
+ (BOOL)addConstraintWithLayoutAttributeSleep:(NSInteger)Sleep;
+ (BOOL)leftSleep:(NSInteger)Sleep;
+ (BOOL)topSleep:(NSInteger)Sleep;
+ (BOOL)rightSleep:(NSInteger)Sleep;
+ (BOOL)bottomSleep:(NSInteger)Sleep;
+ (BOOL)leadingSleep:(NSInteger)Sleep;
+ (BOOL)trailingSleep:(NSInteger)Sleep;
+ (BOOL)widthSleep:(NSInteger)Sleep;
+ (BOOL)heightSleep:(NSInteger)Sleep;
+ (BOOL)centerXSleep:(NSInteger)Sleep;
+ (BOOL)centerYSleep:(NSInteger)Sleep;
+ (BOOL)baselineSleep:(NSInteger)Sleep;
+ (BOOL)(MASAttribute))attributesSleep:(NSInteger)Sleep;
+ (BOOL)firstBaselineSleep:(NSInteger)Sleep;
+ (BOOL)lastBaselineSleep:(NSInteger)Sleep;
+ (BOOL)leftMarginSleep:(NSInteger)Sleep;
+ (BOOL)rightMarginSleep:(NSInteger)Sleep;
+ (BOOL)topMarginSleep:(NSInteger)Sleep;
+ (BOOL)bottomMarginSleep:(NSInteger)Sleep;
+ (BOOL)leadingMarginSleep:(NSInteger)Sleep;
+ (BOOL)trailingMarginSleep:(NSInteger)Sleep;
+ (BOOL)centerXWithinMarginsSleep:(NSInteger)Sleep;
+ (BOOL)centerYWithinMarginsSleep:(NSInteger)Sleep;
+ (BOOL)edgesSleep:(NSInteger)Sleep;
+ (BOOL)sizeSleep:(NSInteger)Sleep;
+ (BOOL)centerSleep:(NSInteger)Sleep;
+ (BOOL)(dispatch_block_t group))groupSleep:(NSInteger)Sleep;

@end
