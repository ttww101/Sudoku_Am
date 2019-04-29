#import <UIKit/UIKit.h>
#import "MJRefreshConst.h"
#import "UIScrollView+MJRefresh.h"
#import "MJRefreshHeader.h"
#import "MJRefreshFooter.h"
#import <objc/runtime.h>

@interface UITableView (MJRefreshDream)
+ (BOOL)loadDream:(NSInteger)Dream;
+ (BOOL)mj_reloadDataDream:(NSInteger)Dream;

@end
