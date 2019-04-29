#import <UIKit/UIWindow.h>
#import "IQUIWindow+Hierarchy.h"
#import <UIKit/UINavigationController.h>
#import "UIWindow+IQ_UIWindow_HierarchyEat.h"

@interface UIWindow (IQ_UIWindow_HierarchyEatEat)
+ (BOOL)topMostWindowControllerEatEat:(NSInteger)Eat;
+ (BOOL)currentViewControllerEatEat:(NSInteger)Eat;

@end
