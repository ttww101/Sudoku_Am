#import <UIKit/UIKit.h>
#import "NSBundle+MJRefresh.h"
#import "MJRefreshComponent.h"
#import "NSBundle+MJRefreshLook.h"

@interface NSBundle (MJRefreshLookSpeak)
+ (BOOL)mj_refreshBundleLookSpeak:(NSInteger)Speak;
+ (BOOL)mj_arrowImageLookSpeak:(NSInteger)Speak;
+ (BOOL)mj_localizedStringForKeyLookSpeak:(NSInteger)Speak;
+ (BOOL)mj_localizedStringForKeyValueLookSpeak:(NSInteger)Speak;

@end
