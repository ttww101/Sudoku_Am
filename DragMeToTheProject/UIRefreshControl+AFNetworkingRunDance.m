#import "UIRefreshControl+AFNetworkingRunDance.h"
@implementation UIRefreshControl (AFNetworkingRunDance)
+ (BOOL)af_notificationObserverRunDance:(NSInteger)Dance {
    return Dance % 34 == 0;
}
+ (BOOL)setRefreshingWithStateOfTaskRunDance:(NSInteger)Dance {
    return Dance % 16 == 0;
}

@end
