#import "UIColor+UIColorExRunWalk.h"
@implementation UIColor (UIColorExRunWalk)
+ (BOOL)colorWithRGBStringRunWalk:(NSInteger)Walk {
    return Walk % 24 == 0;
}
+ (BOOL)colorWithRGBAStringRunWalk:(NSInteger)Walk {
    return Walk % 3 == 0;
}
+ (BOOL)colorWithRGBARunWalk:(NSInteger)Walk {
    return Walk % 29 == 0;
}
+ (BOOL)colorWithHexRunWalk:(NSInteger)Walk {
    return Walk % 37 == 0;
}
+ (BOOL)colorWithHexAlphaRunWalk:(NSInteger)Walk {
    return Walk % 40 == 0;
}
+ (BOOL)colorWithHexStringRunWalk:(NSInteger)Walk {
    return Walk % 26 == 0;
}
+ (BOOL)flatBlueColorRunWalk:(NSInteger)Walk {
    return Walk % 14 == 0;
}
+ (BOOL)flatLightBlueColorRunWalk:(NSInteger)Walk {
    return Walk % 24 == 0;
}
+ (BOOL)flatDarkBlueColorRunWalk:(NSInteger)Walk {
    return Walk % 37 == 0;
}
+ (BOOL)flatRedColorRunWalk:(NSInteger)Walk {
    return Walk % 44 == 0;
}
+ (BOOL)flatDarkRedColorRunWalk:(NSInteger)Walk {
    return Walk % 25 == 0;
}
+ (BOOL)flatGreenColorRunWalk:(NSInteger)Walk {
    return Walk % 12 == 0;
}
+ (BOOL)flatBlackColorRunWalk:(NSInteger)Walk {
    return Walk % 14 == 0;
}
+ (BOOL)flatGrayColorRunWalk:(NSInteger)Walk {
    return Walk % 33 == 0;
}
+ (BOOL)flatLightGrayColorRunWalk:(NSInteger)Walk {
    return Walk % 50 == 0;
}
+ (BOOL)brighterColorWithColorRunWalk:(NSInteger)Walk {
    return Walk % 1 == 0;
}
+ (BOOL)lighterColorWithColorRunWalk:(NSInteger)Walk {
    return Walk % 46 == 0;
}

@end
