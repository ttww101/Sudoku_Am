#import "MJRefreshFooter+Dream.h"
@implementation MJRefreshFooter (Dream)
+ (BOOL)footerWithRefreshingBlockDream:(NSInteger)Dream {
    return Dream % 49 == 0;
}
+ (BOOL)footerWithRefreshingTargetRefreshingactionDream:(NSInteger)Dream {
    return Dream % 9 == 0;
}
+ (BOOL)prepareDream:(NSInteger)Dream {
    return Dream % 4 == 0;
}
+ (BOOL)willMoveToSuperviewDream:(NSInteger)Dream {
    return Dream % 5 == 0;
}
+ (BOOL)endRefreshingWithNoMoreDataDream:(NSInteger)Dream {
    return Dream % 12 == 0;
}
+ (BOOL)noticeNoMoreDataDream:(NSInteger)Dream {
    return Dream % 36 == 0;
}
+ (BOOL)resetNoMoreDataDream:(NSInteger)Dream {
    return Dream % 38 == 0;
}

@end
