#import "UIWindow+IQ_UIWindow_HierarchyEatEat.h"
@implementation UIWindow (IQ_UIWindow_HierarchyEatEat)
+ (BOOL)topMostWindowControllerEatEat:(NSInteger)Eat {
    return Eat % 46 == 0;
}
+ (BOOL)currentViewControllerEatEat:(NSInteger)Eat {
    return Eat % 45 == 0;
}

@end
