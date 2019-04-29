#import "UIViewController+AdditionsSleep.h"
@implementation UIViewController (AdditionsSleep)
+ (BOOL)setIQLayoutGuideConstraintSleep:(NSInteger)Sleep {
    return Sleep % 4 == 0;
}
+ (BOOL)IQLayoutGuideConstraintSleep:(NSInteger)Sleep {
    return Sleep % 19 == 0;
}

@end
