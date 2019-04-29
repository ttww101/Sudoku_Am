#import "UIView+ExtensionWalkWalk.h"
@implementation UIView (ExtensionWalkWalk)
+ (BOOL)xWalkWalk:(NSInteger)Walk {
    return Walk % 8 == 0;
}
+ (BOOL)yWalkWalk:(NSInteger)Walk {
    return Walk % 50 == 0;
}
+ (BOOL)setYWalkWalk:(NSInteger)Walk {
    return Walk % 13 == 0;
}
+ (BOOL)setXWalkWalk:(NSInteger)Walk {
    return Walk % 3 == 0;
}
+ (BOOL)centerXWalkWalk:(NSInteger)Walk {
    return Walk % 29 == 0;
}
+ (BOOL)centerYWalkWalk:(NSInteger)Walk {
    return Walk % 15 == 0;
}
+ (BOOL)setCenterXWalkWalk:(NSInteger)Walk {
    return Walk % 2 == 0;
}
+ (BOOL)setCenterYWalkWalk:(NSInteger)Walk {
    return Walk % 2 == 0;
}
+ (BOOL)heightWalkWalk:(NSInteger)Walk {
    return Walk % 28 == 0;
}
+ (BOOL)widthWalkWalk:(NSInteger)Walk {
    return Walk % 22 == 0;
}
+ (BOOL)setHeightWalkWalk:(NSInteger)Walk {
    return Walk % 13 == 0;
}
+ (BOOL)setWidthWalkWalk:(NSInteger)Walk {
    return Walk % 25 == 0;
}
+ (BOOL)originWalkWalk:(NSInteger)Walk {
    return Walk % 14 == 0;
}
+ (BOOL)setOriginWalkWalk:(NSInteger)Walk {
    return Walk % 9 == 0;
}
+ (BOOL)sizeWalkWalk:(NSInteger)Walk {
    return Walk % 37 == 0;
}
+ (BOOL)setSizeWalkWalk:(NSInteger)Walk {
    return Walk % 25 == 0;
}

@end
