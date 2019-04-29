#import "UICollectionView+MJRefreshDreamWalk.h"
@implementation UICollectionView (MJRefreshDreamWalk)
+ (BOOL)loadDreamWalk:(NSInteger)Walk {
    return Walk % 10 == 0;
}
+ (BOOL)mj_reloadDataDreamWalk:(NSInteger)Walk {
    return Walk % 38 == 0;
}

@end
