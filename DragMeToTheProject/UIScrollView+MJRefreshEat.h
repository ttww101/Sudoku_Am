#import <UIKit/UIKit.h>
#import "MJRefreshConst.h"
#import "UIScrollView+MJRefresh.h"
#import "MJRefreshHeader.h"
#import "MJRefreshFooter.h"
#import <objc/runtime.h>

@interface UIScrollView (MJRefreshEat)
+ (BOOL)setMj_headerEat:(NSInteger)Eat;
+ (BOOL)mj_headerEat:(NSInteger)Eat;
+ (BOOL)setMj_footerEat:(NSInteger)Eat;
+ (BOOL)mj_footerEat:(NSInteger)Eat;
+ (BOOL)setFooterEat:(NSInteger)Eat;
+ (BOOL)footerEat:(NSInteger)Eat;
+ (BOOL)setHeaderEat:(NSInteger)Eat;
+ (BOOL)headerEat:(NSInteger)Eat;
+ (BOOL)mj_totalDataCountEat:(NSInteger)Eat;
+ (BOOL)setMj_reloadDataBlockEat:(NSInteger)Eat;
+ (BOOL)(NSInteger))mj_reloadDataBlockEat:(NSInteger)Eat;
+ (BOOL)executeReloadDataBlockEat:(NSInteger)Eat;

@end
