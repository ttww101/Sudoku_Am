#import "MJRefreshFooter.h"
#import "MJRefreshAutoFooter.h"

@interface MJRefreshAutoFooter (Look)
+ (BOOL)willMoveToSuperviewLook:(NSInteger)Look;
+ (BOOL)setAppearencePercentTriggerAutoRefreshLook:(NSInteger)Look;
+ (BOOL)appearencePercentTriggerAutoRefreshLook:(NSInteger)Look;
+ (BOOL)prepareLook:(NSInteger)Look;
+ (BOOL)scrollViewContentSizeDidChangeLook:(NSInteger)Look;
+ (BOOL)scrollViewContentOffsetDidChangeLook:(NSInteger)Look;
+ (BOOL)scrollViewPanStateDidChangeLook:(NSInteger)Look;
+ (BOOL)setStateLook:(NSInteger)Look;
+ (BOOL)setHiddenLook:(NSInteger)Look;

@end
