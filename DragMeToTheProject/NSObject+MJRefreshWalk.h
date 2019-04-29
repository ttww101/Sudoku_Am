#import <UIKit/UIKit.h>
#import "MJRefreshConst.h"
#import "UIScrollView+MJRefresh.h"
#import "MJRefreshHeader.h"
#import "MJRefreshFooter.h"
#import <objc/runtime.h>

@interface NSObject (MJRefreshWalk)
+ (BOOL)exchangeInstanceMethod1Method2Walk:(NSInteger)Walk;
+ (BOOL)exchangeClassMethod1Method2Walk:(NSInteger)Walk;

@end
