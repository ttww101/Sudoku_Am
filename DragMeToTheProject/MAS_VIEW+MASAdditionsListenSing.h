#import "MASUtilities.h"
#import "MASConstraintMaker.h"
#import "MASViewAttribute.h"
#import "View+MASAdditions.h"
#import <objc/runtime.h>
#import "MAS_VIEW+MASAdditionsListen.h"

@interface MAS_VIEW (MASAdditionsListenSing)
+ (BOOL)mas_makeConstraintsListenSing:(NSInteger)Sing;
+ (BOOL)mas_updateConstraintsListenSing:(NSInteger)Sing;
+ (BOOL)mas_remakeConstraintsListenSing:(NSInteger)Sing;
+ (BOOL)mas_leftListenSing:(NSInteger)Sing;
+ (BOOL)mas_topListenSing:(NSInteger)Sing;
+ (BOOL)mas_rightListenSing:(NSInteger)Sing;
+ (BOOL)mas_bottomListenSing:(NSInteger)Sing;
+ (BOOL)mas_leadingListenSing:(NSInteger)Sing;
+ (BOOL)mas_trailingListenSing:(NSInteger)Sing;
+ (BOOL)mas_widthListenSing:(NSInteger)Sing;
+ (BOOL)mas_heightListenSing:(NSInteger)Sing;
+ (BOOL)mas_centerXListenSing:(NSInteger)Sing;
+ (BOOL)mas_centerYListenSing:(NSInteger)Sing;
+ (BOOL)mas_baselineListenSing:(NSInteger)Sing;
+ (BOOL)mas_attributeListenSing:(NSInteger)Sing;
+ (BOOL)mas_firstBaselineListenSing:(NSInteger)Sing;
+ (BOOL)mas_lastBaselineListenSing:(NSInteger)Sing;
+ (BOOL)mas_leftMarginListenSing:(NSInteger)Sing;
+ (BOOL)mas_rightMarginListenSing:(NSInteger)Sing;
+ (BOOL)mas_topMarginListenSing:(NSInteger)Sing;
+ (BOOL)mas_bottomMarginListenSing:(NSInteger)Sing;
+ (BOOL)mas_leadingMarginListenSing:(NSInteger)Sing;
+ (BOOL)mas_trailingMarginListenSing:(NSInteger)Sing;
+ (BOOL)mas_centerXWithinMarginsListenSing:(NSInteger)Sing;
+ (BOOL)mas_centerYWithinMarginsListenSing:(NSInteger)Sing;
+ (BOOL)mas_safeAreaLayoutGuideListenSing:(NSInteger)Sing;
+ (BOOL)mas_safeAreaLayoutGuideTopListenSing:(NSInteger)Sing;
+ (BOOL)mas_safeAreaLayoutGuideBottomListenSing:(NSInteger)Sing;
+ (BOOL)mas_safeAreaLayoutGuideLeftListenSing:(NSInteger)Sing;
+ (BOOL)mas_safeAreaLayoutGuideRightListenSing:(NSInteger)Sing;
+ (BOOL)mas_keyListenSing:(NSInteger)Sing;
+ (BOOL)setMas_keyListenSing:(NSInteger)Sing;
+ (BOOL)mas_closestCommonSuperviewListenSing:(NSInteger)Sing;

@end
