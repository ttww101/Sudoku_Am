#import <UIKit/UIKit.h>
#import "MJRefreshConst.h"
#import "UIScrollView+MJRefresh.h"
#import "MJRefreshHeader.h"
#import "MJRefreshFooter.h"
#import <objc/runtime.h>
#import "UITableView+MJRefreshDream.h"

@interface UITableView (MJRefreshDreamSpeak)
+ (BOOL)loadDreamSpeak:(NSInteger)Speak;
+ (BOOL)mj_reloadDataDreamSpeak:(NSInteger)Speak;

@end
