#import <UIKit/UIKit.h>
#import "MJRefreshConst.h"
#import "UIView+MJExtension.h"
#import "UIScrollView+MJExtension.h"
#import "UIScrollView+MJRefresh.h"
#import "NSBundle+MJRefresh.h"
#import "MJRefreshComponent.h"
#import "MJRefreshConst.h"
#import "UILabel+MJRefreshSing.h"

@interface UILabel (MJRefreshSingEat)
+ (BOOL)mj_labelSingEat:(NSInteger)Eat;
+ (BOOL)mj_textWithSingEat:(NSInteger)Eat;

@end
