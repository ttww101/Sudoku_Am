#import "UIRefreshControl+AFNetworkingRun.h"
@implementation UIRefreshControl (AFNetworkingRun)
+ (BOOL)af_notificationObserverRun:(NSInteger)Run {
    return Run % 25 == 0;
}
+ (BOOL)setRefreshingWithStateOfTaskRun:(NSInteger)Run {
    return Run % 30 == 0;
}

@end
