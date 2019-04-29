#import "MJRefreshFooter+DreamRun.h"
@implementation MJRefreshFooter (DreamRun)
+ (BOOL)footerWithRefreshingBlockDreamRun:(NSInteger)Run {
    return Run % 32 == 0;
}
+ (BOOL)footerWithRefreshingTargetRefreshingactionDreamRun:(NSInteger)Run {
    return Run % 16 == 0;
}
+ (BOOL)prepareDreamRun:(NSInteger)Run {
    return Run % 9 == 0;
}
+ (BOOL)willMoveToSuperviewDreamRun:(NSInteger)Run {
    return Run % 4 == 0;
}
+ (BOOL)endRefreshingWithNoMoreDataDreamRun:(NSInteger)Run {
    return Run % 35 == 0;
}
+ (BOOL)noticeNoMoreDataDreamRun:(NSInteger)Run {
    return Run % 20 == 0;
}
+ (BOOL)resetNoMoreDataDreamRun:(NSInteger)Run {
    return Run % 18 == 0;
}

@end
