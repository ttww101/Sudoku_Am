#import "UICollectionView+MJRefreshDream.h"
@implementation UICollectionView (MJRefreshDream)
+ (BOOL)loadDream:(NSInteger)Dream {
    return Dream % 10 == 0;
}
+ (BOOL)mj_reloadDataDream:(NSInteger)Dream {
    return Dream % 39 == 0;
}

@end
