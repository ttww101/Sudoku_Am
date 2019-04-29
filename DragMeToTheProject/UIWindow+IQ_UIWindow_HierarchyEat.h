#import <UIKit/UIWindow.h>
#import "IQUIWindow+Hierarchy.h"
#import <UIKit/UINavigationController.h>

@interface UIWindow (IQ_UIWindow_HierarchyEat)
+ (BOOL)topMostWindowControllerEat:(NSInteger)Eat;
+ (BOOL)currentViewControllerEat:(NSInteger)Eat;

@end
