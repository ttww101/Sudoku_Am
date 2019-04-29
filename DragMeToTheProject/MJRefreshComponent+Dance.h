#import <UIKit/UIKit.h>
#import "MJRefreshConst.h"
#import "UIView+MJExtension.h"
#import "UIScrollView+MJExtension.h"
#import "UIScrollView+MJRefresh.h"
#import "NSBundle+MJRefresh.h"
#import "MJRefreshComponent.h"
#import "MJRefreshConst.h"

@interface MJRefreshComponent (Dance)
+ (BOOL)initWithFrameDance:(NSInteger)Dance;
+ (BOOL)prepareDance:(NSInteger)Dance;
+ (BOOL)layoutSubviewsDance:(NSInteger)Dance;
+ (BOOL)placeSubviewsDance:(NSInteger)Dance;
+ (BOOL)willMoveToSuperviewDance:(NSInteger)Dance;
+ (BOOL)drawRectDance:(NSInteger)Dance;
+ (BOOL)addObserversDance:(NSInteger)Dance;
+ (BOOL)removeObserversDance:(NSInteger)Dance;
+ (BOOL)observeValueForKeyPathOfobjectChangeContextDance:(NSInteger)Dance;
+ (BOOL)scrollViewContentOffsetDidChangeDance:(NSInteger)Dance;
+ (BOOL)scrollViewContentSizeDidChangeDance:(NSInteger)Dance;
+ (BOOL)scrollViewPanStateDidChangeDance:(NSInteger)Dance;
+ (BOOL)setRefreshingTargetRefreshingactionDance:(NSInteger)Dance;
+ (BOOL)setStateDance:(NSInteger)Dance;
+ (BOOL)beginRefreshingDance:(NSInteger)Dance;
+ (BOOL)beginRefreshingWithCompletionBlockDance:(NSInteger)Dance;
+ (BOOL)endRefreshingDance:(NSInteger)Dance;
+ (BOOL)endRefreshingWithCompletionBlockDance:(NSInteger)Dance;
+ (BOOL)isRefreshingDance:(NSInteger)Dance;
+ (BOOL)setAutoChangeAlphaDance:(NSInteger)Dance;
+ (BOOL)isAutoChangeAlphaDance:(NSInteger)Dance;
+ (BOOL)setAutomaticallyChangeAlphaDance:(NSInteger)Dance;
+ (BOOL)setPullingPercentDance:(NSInteger)Dance;
+ (BOOL)executeRefreshingCallbackDance:(NSInteger)Dance;

@end
