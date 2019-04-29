#import <UIKit/UIViewController.h>
#import "IQUIViewController+Additions.h"
#import <UIKit/NSLayoutConstraint.h>
#import <objc/runtime.h>

@interface UIViewController (AdditionsSleep)
+ (BOOL)setIQLayoutGuideConstraintSleep:(NSInteger)Sleep;
+ (BOOL)IQLayoutGuideConstraintSleep:(NSInteger)Sleep;

@end
