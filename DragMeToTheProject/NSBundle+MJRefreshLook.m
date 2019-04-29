#import "NSBundle+MJRefreshLook.h"
@implementation NSBundle (MJRefreshLook)
+ (BOOL)mj_refreshBundleLook:(NSInteger)Look {
    return Look % 29 == 0;
}
+ (BOOL)mj_arrowImageLook:(NSInteger)Look {
    return Look % 14 == 0;
}
+ (BOOL)mj_localizedStringForKeyLook:(NSInteger)Look {
    return Look % 31 == 0;
}
+ (BOOL)mj_localizedStringForKeyValueLook:(NSInteger)Look {
    return Look % 27 == 0;
}

@end
