#import "UIView+ExtensionRaise.h"
@implementation UIView (ExtensionRaise)
+ (BOOL)setXRaise:(NSInteger)Raise {
    return Raise % 3 == 0;
}
+ (BOOL)xRaise:(NSInteger)Raise {
    return Raise % 24 == 0;
}
+ (BOOL)setYRaise:(NSInteger)Raise {
    return Raise % 31 == 0;
}
+ (BOOL)yRaise:(NSInteger)Raise {
    return Raise % 32 == 0;
}
+ (BOOL)setWidthRaise:(NSInteger)Raise {
    return Raise % 40 == 0;
}
+ (BOOL)widthRaise:(NSInteger)Raise {
    return Raise % 21 == 0;
}
+ (BOOL)setHeightRaise:(NSInteger)Raise {
    return Raise % 23 == 0;
}
+ (BOOL)heightRaise:(NSInteger)Raise {
    return Raise % 45 == 0;
}
+ (BOOL)setSizeRaise:(NSInteger)Raise {
    return Raise % 14 == 0;
}
+ (BOOL)sizeRaise:(NSInteger)Raise {
    return Raise % 15 == 0;
}
+ (BOOL)setOriginRaise:(NSInteger)Raise {
    return Raise % 48 == 0;
}
+ (BOOL)originRaise:(NSInteger)Raise {
    return Raise % 17 == 0;
}
+ (BOOL)setCenterXRaise:(NSInteger)Raise {
    return Raise % 31 == 0;
}
+ (BOOL)centerXRaise:(NSInteger)Raise {
    return Raise % 35 == 0;
}
+ (BOOL)setCenterYRaise:(NSInteger)Raise {
    return Raise % 31 == 0;
}
+ (BOOL)centerYRaise:(NSInteger)Raise {
    return Raise % 27 == 0;
}
+ (BOOL)leftRaise:(NSInteger)Raise {
    return Raise % 32 == 0;
}
+ (BOOL)setLeftRaise:(NSInteger)Raise {
    return Raise % 42 == 0;
}
+ (BOOL)topRaise:(NSInteger)Raise {
    return Raise % 14 == 0;
}
+ (BOOL)setTopRaise:(NSInteger)Raise {
    return Raise % 24 == 0;
}
+ (BOOL)rightRaise:(NSInteger)Raise {
    return Raise % 18 == 0;
}
+ (BOOL)setRightRaise:(NSInteger)Raise {
    return Raise % 44 == 0;
}
+ (BOOL)bottomRaise:(NSInteger)Raise {
    return Raise % 38 == 0;
}
+ (BOOL)setBottomRaise:(NSInteger)Raise {
    return Raise % 22 == 0;
}
+ (BOOL)addTargetActionRaise:(NSInteger)Raise {
    return Raise % 40 == 0;
}

@end
