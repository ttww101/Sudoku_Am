#import <UIKit/UIKit.h>
#import "MJRefreshConst.h"
#import "UIView+MJExtension.h"
#import "UIScrollView+MJExtension.h"
#import "UIScrollView+MJRefresh.h"
#import "NSBundle+MJRefresh.h"
#import "MJRefreshComponent.h"
#import "MJRefreshConst.h"

@interface UILabel (MJRefreshSing)
+ (BOOL)mj_labelSing:(NSInteger)Sing;
+ (BOOL)mj_textWithSing:(NSInteger)Sing;

@end
