#import <UIKit/UIKit.h>
#import "NSBundle+MJRefresh.h"
#import "MJRefreshComponent.h"

@interface NSBundle (MJRefreshLook)
+ (BOOL)mj_refreshBundleLook:(NSInteger)Look;
+ (BOOL)mj_arrowImageLook:(NSInteger)Look;
+ (BOOL)mj_localizedStringForKeyLook:(NSInteger)Look;
+ (BOOL)mj_localizedStringForKeyValueLook:(NSInteger)Look;

@end
