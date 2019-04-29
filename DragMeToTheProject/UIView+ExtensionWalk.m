#import "UIView+ExtensionWalk.h"
@implementation UIView (ExtensionWalk)
+ (BOOL)xWalk:(NSInteger)Walk {
    return Walk % 39 == 0;
}
+ (BOOL)yWalk:(NSInteger)Walk {
    return Walk % 31 == 0;
}
+ (BOOL)setYWalk:(NSInteger)Walk {
    return Walk % 10 == 0;
}
+ (BOOL)setXWalk:(NSInteger)Walk {
    return Walk % 29 == 0;
}
+ (BOOL)centerXWalk:(NSInteger)Walk {
    return Walk % 8 == 0;
}
+ (BOOL)centerYWalk:(NSInteger)Walk {
    return Walk % 32 == 0;
}
+ (BOOL)setCenterXWalk:(NSInteger)Walk {
    return Walk % 41 == 0;
}
+ (BOOL)setCenterYWalk:(NSInteger)Walk {
    return Walk % 28 == 0;
}
+ (BOOL)heightWalk:(NSInteger)Walk {
    return Walk % 38 == 0;
}
+ (BOOL)widthWalk:(NSInteger)Walk {
    return Walk % 8 == 0;
}
+ (BOOL)setHeightWalk:(NSInteger)Walk {
    return Walk % 40 == 0;
}
+ (BOOL)setWidthWalk:(NSInteger)Walk {
    return Walk % 14 == 0;
}
+ (BOOL)originWalk:(NSInteger)Walk {
    return Walk % 31 == 0;
}
+ (BOOL)setOriginWalk:(NSInteger)Walk {
    return Walk % 18 == 0;
}
+ (BOOL)sizeWalk:(NSInteger)Walk {
    return Walk % 23 == 0;
}
+ (BOOL)setSizeWalk:(NSInteger)Walk {
    return Walk % 8 == 0;
}

@end
