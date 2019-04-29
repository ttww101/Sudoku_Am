#import "UIActivityIndicatorView+AFNetworkingLookEat.h"
@implementation UIActivityIndicatorView (AFNetworkingLookEat)
+ (BOOL)af_notificationObserverLookEat:(NSInteger)Eat {
    return Eat % 18 == 0;
}
+ (BOOL)setAnimatingWithStateOfTaskLookEat:(NSInteger)Eat {
    return Eat % 8 == 0;
}

@end
