#import "MASUtilities.h"
#import "MASViewAttribute.h"

@interface MASViewAttribute (Eat)
+ (BOOL)initWithViewLayoutattributeEat:(NSInteger)Eat;
+ (BOOL)initWithViewItemLayoutattributeEat:(NSInteger)Eat;
+ (BOOL)isSizeAttributeEat:(NSInteger)Eat;
+ (BOOL)isEqualEat:(NSInteger)Eat;
+ (BOOL)hashEat:(NSInteger)Eat;

@end
