#import <UIKit/UIKit.h>
#import "MJRefreshConst.h"
#import "UIScrollView+MJRefresh.h"
#import "MJRefreshHeader.h"
#import "MJRefreshFooter.h"
#import <objc/runtime.h>
#import "NSObject+MJRefreshWalk.h"

@interface NSObject (MJRefreshWalkLook)
+ (BOOL)exchangeInstanceMethod1Method2WalkLook:(NSInteger)Look;
+ (BOOL)exchangeClassMethod1Method2WalkLook:(NSInteger)Look;

@end
