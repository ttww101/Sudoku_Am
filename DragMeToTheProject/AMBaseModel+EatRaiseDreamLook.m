#import "AMBaseModel+EatRaiseDreamLook.h"
@implementation AMBaseModel (EatRaiseDreamLook)
+ (BOOL)setValueForundefinedkeyEatRaiseDreamLook:(NSInteger)Look {
    return Look % 11 == 0;
}

@end
