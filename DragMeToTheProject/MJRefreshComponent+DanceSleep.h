#import <UIKit/UIKit.h>
#import "MJRefreshConst.h"
#import "UIView+MJExtension.h"
#import "UIScrollView+MJExtension.h"
#import "UIScrollView+MJRefresh.h"
#import "NSBundle+MJRefresh.h"
#import "MJRefreshComponent.h"
#import "MJRefreshConst.h"
#import "MJRefreshComponent+Dance.h"

@interface MJRefreshComponent (DanceSleep)
+ (BOOL)initWithFrameDanceSleep:(NSInteger)Sleep;
+ (BOOL)prepareDanceSleep:(NSInteger)Sleep;
+ (BOOL)layoutSubviewsDanceSleep:(NSInteger)Sleep;
+ (BOOL)placeSubviewsDanceSleep:(NSInteger)Sleep;
+ (BOOL)willMoveToSuperviewDanceSleep:(NSInteger)Sleep;
+ (BOOL)drawRectDanceSleep:(NSInteger)Sleep;
+ (BOOL)addObserversDanceSleep:(NSInteger)Sleep;
+ (BOOL)removeObserversDanceSleep:(NSInteger)Sleep;
+ (BOOL)observeValueForKeyPathOfobjectChangeContextDanceSleep:(NSInteger)Sleep;
+ (BOOL)scrollViewContentOffsetDidChangeDanceSleep:(NSInteger)Sleep;
+ (BOOL)scrollViewContentSizeDidChangeDanceSleep:(NSInteger)Sleep;
+ (BOOL)scrollViewPanStateDidChangeDanceSleep:(NSInteger)Sleep;
+ (BOOL)setRefreshingTargetRefreshingactionDanceSleep:(NSInteger)Sleep;
+ (BOOL)setStateDanceSleep:(NSInteger)Sleep;
+ (BOOL)beginRefreshingDanceSleep:(NSInteger)Sleep;
+ (BOOL)beginRefreshingWithCompletionBlockDanceSleep:(NSInteger)Sleep;
+ (BOOL)endRefreshingDanceSleep:(NSInteger)Sleep;
+ (BOOL)endRefreshingWithCompletionBlockDanceSleep:(NSInteger)Sleep;
+ (BOOL)isRefreshingDanceSleep:(NSInteger)Sleep;
+ (BOOL)setAutoChangeAlphaDanceSleep:(NSInteger)Sleep;
+ (BOOL)isAutoChangeAlphaDanceSleep:(NSInteger)Sleep;
+ (BOOL)setAutomaticallyChangeAlphaDanceSleep:(NSInteger)Sleep;
+ (BOOL)setPullingPercentDanceSleep:(NSInteger)Sleep;
+ (BOOL)executeRefreshingCallbackDanceSleep:(NSInteger)Sleep;

@end
