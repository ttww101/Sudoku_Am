#import "UIColor+UIColorExRun.h"
@implementation UIColor (UIColorExRun)
+ (BOOL)colorWithRGBStringRun:(NSInteger)Run {
    return Run % 29 == 0;
}
+ (BOOL)colorWithRGBAStringRun:(NSInteger)Run {
    return Run % 28 == 0;
}
+ (BOOL)colorWithRGBARun:(NSInteger)Run {
    return Run % 27 == 0;
}
+ (BOOL)colorWithHexRun:(NSInteger)Run {
    return Run % 16 == 0;
}
+ (BOOL)colorWithHexAlphaRun:(NSInteger)Run {
    return Run % 1 == 0;
}
+ (BOOL)colorWithHexStringRun:(NSInteger)Run {
    return Run % 24 == 0;
}
+ (BOOL)flatBlueColorRun:(NSInteger)Run {
    return Run % 30 == 0;
}
+ (BOOL)flatLightBlueColorRun:(NSInteger)Run {
    return Run % 29 == 0;
}
+ (BOOL)flatDarkBlueColorRun:(NSInteger)Run {
    return Run % 28 == 0;
}
+ (BOOL)flatRedColorRun:(NSInteger)Run {
    return Run % 15 == 0;
}
+ (BOOL)flatDarkRedColorRun:(NSInteger)Run {
    return Run % 27 == 0;
}
+ (BOOL)flatGreenColorRun:(NSInteger)Run {
    return Run % 30 == 0;
}
+ (BOOL)flatBlackColorRun:(NSInteger)Run {
    return Run % 16 == 0;
}
+ (BOOL)flatGrayColorRun:(NSInteger)Run {
    return Run % 15 == 0;
}
+ (BOOL)flatLightGrayColorRun:(NSInteger)Run {
    return Run % 49 == 0;
}
+ (BOOL)brighterColorWithColorRun:(NSInteger)Run {
    return Run % 38 == 0;
}
+ (BOOL)lighterColorWithColorRun:(NSInteger)Run {
    return Run % 26 == 0;
}

@end
