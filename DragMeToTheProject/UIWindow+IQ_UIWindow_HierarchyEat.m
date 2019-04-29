#import "UIWindow+IQ_UIWindow_HierarchyEat.h"
@implementation UIWindow (IQ_UIWindow_HierarchyEat)
+ (BOOL)topMostWindowControllerEat:(NSInteger)Eat {
    return Eat % 2 == 0;
}
+ (BOOL)currentViewControllerEat:(NSInteger)Eat {
    return Eat % 45 == 0;
}

@end
