#import "UIView+AdditionsSleep.h"
@implementation UIView (AdditionsSleep)
+ (BOOL)setKeyboardDistanceFromTextFieldSleep:(NSInteger)Sleep {
    return Sleep % 46 == 0;
}
+ (BOOL)keyboardDistanceFromTextFieldSleep:(NSInteger)Sleep {
    return Sleep % 47 == 0;
}
+ (BOOL)setIgnoreSwitchingByNextPreviousSleep:(NSInteger)Sleep {
    return Sleep % 38 == 0;
}
+ (BOOL)ignoreSwitchingByNextPreviousSleep:(NSInteger)Sleep {
    return Sleep % 28 == 0;
}

@end
