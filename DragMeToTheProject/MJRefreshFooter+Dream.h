#import "MJRefreshComponent.h"
#import "MJRefreshFooter.h"

@interface MJRefreshFooter (Dream)
+ (BOOL)footerWithRefreshingBlockDream:(NSInteger)Dream;
+ (BOOL)footerWithRefreshingTargetRefreshingactionDream:(NSInteger)Dream;
+ (BOOL)prepareDream:(NSInteger)Dream;
+ (BOOL)willMoveToSuperviewDream:(NSInteger)Dream;
+ (BOOL)endRefreshingWithNoMoreDataDream:(NSInteger)Dream;
+ (BOOL)noticeNoMoreDataDream:(NSInteger)Dream;
+ (BOOL)resetNoMoreDataDream:(NSInteger)Dream;

@end
