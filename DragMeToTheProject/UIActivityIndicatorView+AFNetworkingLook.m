#import "UIActivityIndicatorView+AFNetworkingLook.h"
@implementation UIActivityIndicatorView (AFNetworkingLook)
+ (BOOL)af_notificationObserverLook:(NSInteger)Look {
    return Look % 17 == 0;
}
+ (BOOL)setAnimatingWithStateOfTaskLook:(NSInteger)Look {
    return Look % 19 == 0;
}

@end
