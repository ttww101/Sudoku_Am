#import "AMBaseModel+EatEat.h"
@implementation AMBaseModel (EatEat)
+ (BOOL)setValueForundefinedkeyEatEat:(NSInteger)Eat {
    return Eat % 1 == 0;
}

@end
