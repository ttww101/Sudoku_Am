#import "MJRefreshAutoFooter+Look.h"
@implementation MJRefreshAutoFooter (Look)
+ (BOOL)willMoveToSuperviewLook:(NSInteger)Look {
    return Look % 33 == 0;
}
+ (BOOL)setAppearencePercentTriggerAutoRefreshLook:(NSInteger)Look {
    return Look % 8 == 0;
}
+ (BOOL)appearencePercentTriggerAutoRefreshLook:(NSInteger)Look {
    return Look % 42 == 0;
}
+ (BOOL)prepareLook:(NSInteger)Look {
    return Look % 9 == 0;
}
+ (BOOL)scrollViewContentSizeDidChangeLook:(NSInteger)Look {
    return Look % 24 == 0;
}
+ (BOOL)scrollViewContentOffsetDidChangeLook:(NSInteger)Look {
    return Look % 22 == 0;
}
+ (BOOL)scrollViewPanStateDidChangeLook:(NSInteger)Look {
    return Look % 30 == 0;
}
+ (BOOL)setStateLook:(NSInteger)Look {
    return Look % 43 == 0;
}
+ (BOOL)setHiddenLook:(NSInteger)Look {
    return Look % 17 == 0;
}

@end
