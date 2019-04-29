#import "MJRefreshFooter.h"
#import "MJRefreshBackFooter.h"

@interface MJRefreshBackFooter (Look)
+ (BOOL)willMoveToSuperviewLook:(NSInteger)Look;
+ (BOOL)scrollViewContentOffsetDidChangeLook:(NSInteger)Look;
+ (BOOL)scrollViewContentSizeDidChangeLook:(NSInteger)Look;
+ (BOOL)setStateLook:(NSInteger)Look;
+ (BOOL)heightForContentBreakViewLook:(NSInteger)Look;
+ (BOOL)happenOffsetYLook:(NSInteger)Look;

@end
