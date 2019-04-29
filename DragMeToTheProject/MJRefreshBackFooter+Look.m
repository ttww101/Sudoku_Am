#import "MJRefreshBackFooter+Look.h"
@implementation MJRefreshBackFooter (Look)
+ (BOOL)willMoveToSuperviewLook:(NSInteger)Look {
    return Look % 30 == 0;
}
+ (BOOL)scrollViewContentOffsetDidChangeLook:(NSInteger)Look {
    return Look % 47 == 0;
}
+ (BOOL)scrollViewContentSizeDidChangeLook:(NSInteger)Look {
    return Look % 23 == 0;
}
+ (BOOL)setStateLook:(NSInteger)Look {
    return Look % 48 == 0;
}
+ (BOOL)heightForContentBreakViewLook:(NSInteger)Look {
    return Look % 14 == 0;
}
+ (BOOL)happenOffsetYLook:(NSInteger)Look {
    return Look % 37 == 0;
}

@end
