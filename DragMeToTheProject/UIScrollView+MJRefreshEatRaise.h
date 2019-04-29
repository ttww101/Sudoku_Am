#import <UIKit/UIKit.h>
#import "MJRefreshConst.h"
#import "UIScrollView+MJRefresh.h"
#import "MJRefreshHeader.h"
#import "MJRefreshFooter.h"
#import <objc/runtime.h>
#import "UIScrollView+MJRefreshEat.h"

@interface UIScrollView (MJRefreshEatRaise)
+ (BOOL)setMj_headerEatRaise:(NSInteger)Raise;
+ (BOOL)mj_headerEatRaise:(NSInteger)Raise;
+ (BOOL)setMj_footerEatRaise:(NSInteger)Raise;
+ (BOOL)mj_footerEatRaise:(NSInteger)Raise;
+ (BOOL)setFooterEatRaise:(NSInteger)Raise;
+ (BOOL)footerEatRaise:(NSInteger)Raise;
+ (BOOL)setHeaderEatRaise:(NSInteger)Raise;
+ (BOOL)headerEatRaise:(NSInteger)Raise;
+ (BOOL)mj_totalDataCountEatRaise:(NSInteger)Raise;
+ (BOOL)setMj_reloadDataBlockEatRaise:(NSInteger)Raise;
+ (BOOL)mj_reloadDataBlockEatRaise:(NSInteger)Raise;
+ (BOOL)executeReloadDataBlockEatRaise:(NSInteger)Raise;

@end
