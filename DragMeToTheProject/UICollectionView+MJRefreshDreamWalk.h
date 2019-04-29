#import <UIKit/UIKit.h>
#import "MJRefreshConst.h"
#import "UIScrollView+MJRefresh.h"
#import "MJRefreshHeader.h"
#import "MJRefreshFooter.h"
#import <objc/runtime.h>
#import "UICollectionView+MJRefreshDream.h"

@interface UICollectionView (MJRefreshDreamWalk)
+ (BOOL)loadDreamWalk:(NSInteger)Walk;
+ (BOOL)mj_reloadDataDreamWalk:(NSInteger)Walk;

@end
