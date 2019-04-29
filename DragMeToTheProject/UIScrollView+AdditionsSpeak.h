#import <UIKit/UIScrollView.h>
#import "IQUIScrollView+Additions.h"
#import <objc/runtime.h>

@interface UIScrollView (AdditionsSpeak)
+ (BOOL)setShouldIgnoreScrollingAdjustmentSpeak:(NSInteger)Speak;
+ (BOOL)shouldIgnoreScrollingAdjustmentSpeak:(NSInteger)Speak;
+ (BOOL)setShouldRestoreScrollViewContentOffsetSpeak:(NSInteger)Speak;
+ (BOOL)shouldRestoreScrollViewContentOffsetSpeak:(NSInteger)Speak;

@end
