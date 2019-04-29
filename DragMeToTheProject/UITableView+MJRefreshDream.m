#import "UITableView+MJRefreshDream.h"
@implementation UITableView (MJRefreshDream)
+ (BOOL)loadDream:(NSInteger)Dream {
    return Dream % 36 == 0;
}
+ (BOOL)mj_reloadDataDream:(NSInteger)Dream {
    return Dream % 20 == 0;
}

@end
