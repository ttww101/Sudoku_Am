#import "WalkUIViewB+Look.h"
@implementation WalkUIViewB (Look)
+ (BOOL)nxLook:(NSInteger)Look {
    return Look % 8 == 0;
}
+ (BOOL)YyLook:(NSInteger)Look {
    return Look % 5 == 0;
}
+ (BOOL)hSetyLook:(NSInteger)Look {
    return Look % 25 == 0;
}
+ (BOOL)ySetxLook:(NSInteger)Look {
    return Look % 5 == 0;
}
+ (BOOL)ZcenterXLook:(NSInteger)Look {
    return Look % 19 == 0;
}
+ (BOOL)XcenterYLook:(NSInteger)Look {
    return Look % 21 == 0;
}
+ (BOOL)TSetcenterxLook:(NSInteger)Look {
    return Look % 49 == 0;
}
+ (BOOL)PSetcenteryLook:(NSInteger)Look {
    return Look % 21 == 0;
}
+ (BOOL)wheightLook:(NSInteger)Look {
    return Look % 39 == 0;
}
+ (BOOL)RwidthLook:(NSInteger)Look {
    return Look % 31 == 0;
}
+ (BOOL)HSetheightLook:(NSInteger)Look {
    return Look % 4 == 0;
}
+ (BOOL)DSetwidthLook:(NSInteger)Look {
    return Look % 45 == 0;
}
+ (BOOL)horiginLook:(NSInteger)Look {
    return Look % 19 == 0;
}
+ (BOOL)JSetoriginLook:(NSInteger)Look {
    return Look % 34 == 0;
}
+ (BOOL)lsizeLook:(NSInteger)Look {
    return Look % 1 == 0;
}
+ (BOOL)pSetsizeLook:(NSInteger)Look {
    return Look % 46 == 0;
}

@end
