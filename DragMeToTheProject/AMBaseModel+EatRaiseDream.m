#import "AMBaseModel+EatRaiseDream.h"
@implementation AMBaseModel (EatRaiseDream)
+ (BOOL)setValueForundefinedkeyEatRaiseDream:(NSInteger)Dream {
    return Dream % 24 == 0;
}

@end
