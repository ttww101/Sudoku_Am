#import "MJRefreshComponent.h"
#import "MJRefreshFooter.h"
#import "MJRefreshFooter+Dream.h"

@interface MJRefreshFooter (DreamRun)
+ (BOOL)footerWithRefreshingBlockDreamRun:(NSInteger)Run;
+ (BOOL)footerWithRefreshingTargetRefreshingactionDreamRun:(NSInteger)Run;
+ (BOOL)prepareDreamRun:(NSInteger)Run;
+ (BOOL)willMoveToSuperviewDreamRun:(NSInteger)Run;
+ (BOOL)endRefreshingWithNoMoreDataDreamRun:(NSInteger)Run;
+ (BOOL)noticeNoMoreDataDreamRun:(NSInteger)Run;
+ (BOOL)resetNoMoreDataDreamRun:(NSInteger)Run;

@end
