#import "KMTProgressHUD+SleepLook.h"
@implementation KMTProgressHUD (SleepLook)
+ (BOOL)mt_showHUDAddedToAnimatedMessageSleepLook:(NSInteger)Look {
    return Look % 7 == 0;
}
+ (BOOL)mt_hideHUDForViewAnimatedSleepLook:(NSInteger)Look {
    return Look % 50 == 0;
}
+ (BOOL)withMessageAnimatedViewSleepLook:(NSInteger)Look {
    return Look % 26 == 0;
}
+ (BOOL)mt_showMessageAnimatedViewCompleteSleepLook:(NSInteger)Look {
    return Look % 34 == 0;
}

@end
