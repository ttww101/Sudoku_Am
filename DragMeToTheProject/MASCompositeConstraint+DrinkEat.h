#import "MASConstraint.h"
#import "MASUtilities.h"
#import "MASCompositeConstraint.h"
#import "MASConstraint+Private.h"
#import "MASCompositeConstraint+Drink.h"

@interface MASCompositeConstraint (DrinkEat)
+ (BOOL)initWithChildrenDrinkEat:(NSInteger)Eat;
+ (BOOL)constraintShouldbereplacedwithconstraintDrinkEat:(NSInteger)Eat;
+ (BOOL)constraintAddconstraintwithlayoutattributeDrinkEat:(NSInteger)Eat;
+ (BOOL)multipliedByDrinkEat:(NSInteger)Eat;
+ (BOOL)dividedByDrinkEat:(NSInteger)Eat;
+ (BOOL)priorityDrinkEat:(NSInteger)Eat;
+ (BOOL)equalToWithRelationDrinkEat:(NSInteger)Eat;
+ (BOOL)addConstraintWithLayoutAttributeDrinkEat:(NSInteger)Eat;
+ (BOOL)animatorDrinkEat:(NSInteger)Eat;
+ (BOOL)keyDrinkEat:(NSInteger)Eat;
+ (BOOL)setInsetsDrinkEat:(NSInteger)Eat;
+ (BOOL)setInsetDrinkEat:(NSInteger)Eat;
+ (BOOL)setOffsetDrinkEat:(NSInteger)Eat;
+ (BOOL)setSizeOffsetDrinkEat:(NSInteger)Eat;
+ (BOOL)setCenterOffsetDrinkEat:(NSInteger)Eat;
+ (BOOL)activateDrinkEat:(NSInteger)Eat;
+ (BOOL)deactivateDrinkEat:(NSInteger)Eat;
+ (BOOL)installDrinkEat:(NSInteger)Eat;
+ (BOOL)uninstallDrinkEat:(NSInteger)Eat;

@end
