#import <UIKit/UIKit.h>
#import "UIScrollView+MJExtension.h"
#import <objc/runtime.h>
#import "UIScrollView+MJExtensionSleep.h"

@interface UIScrollView (MJExtensionSleepEat)
+ (BOOL)mj_insetSleepEat:(NSInteger)Eat;
+ (BOOL)setMj_insetTSleepEat:(NSInteger)Eat;
+ (BOOL)mj_insetTSleepEat:(NSInteger)Eat;
+ (BOOL)setMj_insetBSleepEat:(NSInteger)Eat;
+ (BOOL)mj_insetBSleepEat:(NSInteger)Eat;
+ (BOOL)setMj_insetLSleepEat:(NSInteger)Eat;
+ (BOOL)mj_insetLSleepEat:(NSInteger)Eat;
+ (BOOL)setMj_insetRSleepEat:(NSInteger)Eat;
+ (BOOL)mj_insetRSleepEat:(NSInteger)Eat;
+ (BOOL)setMj_offsetXSleepEat:(NSInteger)Eat;
+ (BOOL)mj_offsetXSleepEat:(NSInteger)Eat;
+ (BOOL)setMj_offsetYSleepEat:(NSInteger)Eat;
+ (BOOL)mj_offsetYSleepEat:(NSInteger)Eat;
+ (BOOL)setMj_contentWSleepEat:(NSInteger)Eat;
+ (BOOL)mj_contentWSleepEat:(NSInteger)Eat;
+ (BOOL)setMj_contentHSleepEat:(NSInteger)Eat;
+ (BOOL)mj_contentHSleepEat:(NSInteger)Eat;

@end
