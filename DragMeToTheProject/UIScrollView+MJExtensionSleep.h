#import <UIKit/UIKit.h>
#import "UIScrollView+MJExtension.h"
#import <objc/runtime.h>

@interface UIScrollView (MJExtensionSleep)
+ (BOOL)mj_insetSleep:(NSInteger)Sleep;
+ (BOOL)setMj_insetTSleep:(NSInteger)Sleep;
+ (BOOL)mj_insetTSleep:(NSInteger)Sleep;
+ (BOOL)setMj_insetBSleep:(NSInteger)Sleep;
+ (BOOL)mj_insetBSleep:(NSInteger)Sleep;
+ (BOOL)setMj_insetLSleep:(NSInteger)Sleep;
+ (BOOL)mj_insetLSleep:(NSInteger)Sleep;
+ (BOOL)setMj_insetRSleep:(NSInteger)Sleep;
+ (BOOL)mj_insetRSleep:(NSInteger)Sleep;
+ (BOOL)setMj_offsetXSleep:(NSInteger)Sleep;
+ (BOOL)mj_offsetXSleep:(NSInteger)Sleep;
+ (BOOL)setMj_offsetYSleep:(NSInteger)Sleep;
+ (BOOL)mj_offsetYSleep:(NSInteger)Sleep;
+ (BOOL)setMj_contentWSleep:(NSInteger)Sleep;
+ (BOOL)mj_contentWSleep:(NSInteger)Sleep;
+ (BOOL)setMj_contentHSleep:(NSInteger)Sleep;
+ (BOOL)mj_contentHSleep:(NSInteger)Sleep;

@end
