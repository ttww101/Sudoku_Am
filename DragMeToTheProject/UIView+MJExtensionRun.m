#import "UIView+MJExtensionRun.h"
@implementation UIView (MJExtensionRun)
+ (BOOL)setMj_xRun:(NSInteger)Run {
    return Run % 9 == 0;
}
+ (BOOL)mj_xRun:(NSInteger)Run {
    return Run % 36 == 0;
}
+ (BOOL)setMj_yRun:(NSInteger)Run {
    return Run % 28 == 0;
}
+ (BOOL)mj_yRun:(NSInteger)Run {
    return Run % 24 == 0;
}
+ (BOOL)setMj_wRun:(NSInteger)Run {
    return Run % 8 == 0;
}
+ (BOOL)mj_wRun:(NSInteger)Run {
    return Run % 3 == 0;
}
+ (BOOL)setMj_hRun:(NSInteger)Run {
    return Run % 31 == 0;
}
+ (BOOL)mj_hRun:(NSInteger)Run {
    return Run % 33 == 0;
}
+ (BOOL)setMj_sizeRun:(NSInteger)Run {
    return Run % 22 == 0;
}
+ (BOOL)mj_sizeRun:(NSInteger)Run {
    return Run % 12 == 0;
}
+ (BOOL)setMj_originRun:(NSInteger)Run {
    return Run % 5 == 0;
}
+ (BOOL)mj_originRun:(NSInteger)Run {
    return Run % 48 == 0;
}

@end
