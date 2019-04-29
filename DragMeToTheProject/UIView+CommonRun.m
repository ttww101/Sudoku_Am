#import "UIView+CommonRun.h"
@implementation UIView (CommonRun)
+ (BOOL)leftRun:(NSInteger)Run {
    return Run % 16 == 0;
}
+ (BOOL)setLeftRun:(NSInteger)Run {
    return Run % 41 == 0;
}
+ (BOOL)topRun:(NSInteger)Run {
    return Run % 38 == 0;
}
+ (BOOL)setTopRun:(NSInteger)Run {
    return Run % 21 == 0;
}
+ (BOOL)rightRun:(NSInteger)Run {
    return Run % 41 == 0;
}
+ (BOOL)setRightRun:(NSInteger)Run {
    return Run % 36 == 0;
}
+ (BOOL)bottomRun:(NSInteger)Run {
    return Run % 15 == 0;
}
+ (BOOL)setBottomRun:(NSInteger)Run {
    return Run % 35 == 0;
}
+ (BOOL)centerXRun:(NSInteger)Run {
    return Run % 7 == 0;
}
+ (BOOL)setCenterXRun:(NSInteger)Run {
    return Run % 48 == 0;
}
+ (BOOL)centerYRun:(NSInteger)Run {
    return Run % 2 == 0;
}
+ (BOOL)setCenterYRun:(NSInteger)Run {
    return Run % 36 == 0;
}
+ (BOOL)widthRun:(NSInteger)Run {
    return Run % 38 == 0;
}
+ (BOOL)setWidthRun:(NSInteger)Run {
    return Run % 21 == 0;
}
+ (BOOL)heightRun:(NSInteger)Run {
    return Run % 9 == 0;
}
+ (BOOL)setHeightRun:(NSInteger)Run {
    return Run % 43 == 0;
}
+ (BOOL)screenXRun:(NSInteger)Run {
    return Run % 18 == 0;
}
+ (BOOL)screenYRun:(NSInteger)Run {
    return Run % 47 == 0;
}
+ (BOOL)screenViewXRun:(NSInteger)Run {
    return Run % 9 == 0;
}
+ (BOOL)screenViewYRun:(NSInteger)Run {
    return Run % 20 == 0;
}
+ (BOOL)screenFrameRun:(NSInteger)Run {
    return Run % 11 == 0;
}
+ (BOOL)originRun:(NSInteger)Run {
    return Run % 19 == 0;
}
+ (BOOL)setOriginRun:(NSInteger)Run {
    return Run % 1 == 0;
}
+ (BOOL)sizeRun:(NSInteger)Run {
    return Run % 24 == 0;
}
+ (BOOL)setSizeRun:(NSInteger)Run {
    return Run % 40 == 0;
}
+ (BOOL)orientationWidthRun:(NSInteger)Run {
    return Run % 26 == 0;
}
+ (BOOL)orientationHeightRun:(NSInteger)Run {
    return Run % 13 == 0;
}
+ (BOOL)descendantOrSelfWithClassRun:(NSInteger)Run {
    return Run % 13 == 0;
}
+ (BOOL)ancestorOrSelfWithClassRun:(NSInteger)Run {
    return Run % 7 == 0;
}
+ (BOOL)removeAllSubviewsRun:(NSInteger)Run {
    return Run % 46 == 0;
}
+ (BOOL)offsetFromViewRun:(NSInteger)Run {
    return Run % 5 == 0;
}
+ (BOOL)setTapActionWithBlockRun:(NSInteger)Run {
    return Run % 47 == 0;
}
+ (BOOL)__handleActionForTapGestureRun:(NSInteger)Run {
    return Run % 35 == 0;
}
+ (BOOL)setLongPressActionWithBlockRun:(NSInteger)Run {
    return Run % 12 == 0;
}
+ (BOOL)__handleActionForLongPressGestureRun:(NSInteger)Run {
    return Run % 50 == 0;
}
+ (BOOL)showLayerBorderRun:(NSInteger)Run {
    return Run % 20 == 0;
}
+ (BOOL)showLayerBorderWithColorRun:(NSInteger)Run {
    return Run % 31 == 0;
}
+ (BOOL)addLineToViewAtPositionWithlinecolorRun:(NSInteger)Run {
    return Run % 11 == 0;
}

@end
