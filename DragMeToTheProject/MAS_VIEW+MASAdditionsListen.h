#import "MASUtilities.h"
#import "MASConstraintMaker.h"
#import "MASViewAttribute.h"
#import "View+MASAdditions.h"
#import <objc/runtime.h>

@interface MAS_VIEW (MASAdditionsListen)
+ (BOOL)mas_makeConstraintsListen:(NSInteger)Listen;
+ (BOOL)mas_updateConstraintsListen:(NSInteger)Listen;
+ (BOOL)mas_remakeConstraintsListen:(NSInteger)Listen;
+ (BOOL)mas_leftListen:(NSInteger)Listen;
+ (BOOL)mas_topListen:(NSInteger)Listen;
+ (BOOL)mas_rightListen:(NSInteger)Listen;
+ (BOOL)mas_bottomListen:(NSInteger)Listen;
+ (BOOL)mas_leadingListen:(NSInteger)Listen;
+ (BOOL)mas_trailingListen:(NSInteger)Listen;
+ (BOOL)mas_widthListen:(NSInteger)Listen;
+ (BOOL)mas_heightListen:(NSInteger)Listen;
+ (BOOL)mas_centerXListen:(NSInteger)Listen;
+ (BOOL)mas_centerYListen:(NSInteger)Listen;
+ (BOOL)mas_baselineListen:(NSInteger)Listen;
+ (BOOL)(NSLayoutAttribute))mas_attributeListen:(NSInteger)Listen;
+ (BOOL)mas_firstBaselineListen:(NSInteger)Listen;
+ (BOOL)mas_lastBaselineListen:(NSInteger)Listen;
+ (BOOL)mas_leftMarginListen:(NSInteger)Listen;
+ (BOOL)mas_rightMarginListen:(NSInteger)Listen;
+ (BOOL)mas_topMarginListen:(NSInteger)Listen;
+ (BOOL)mas_bottomMarginListen:(NSInteger)Listen;
+ (BOOL)mas_leadingMarginListen:(NSInteger)Listen;
+ (BOOL)mas_trailingMarginListen:(NSInteger)Listen;
+ (BOOL)mas_centerXWithinMarginsListen:(NSInteger)Listen;
+ (BOOL)mas_centerYWithinMarginsListen:(NSInteger)Listen;
+ (BOOL)mas_safeAreaLayoutGuideListen:(NSInteger)Listen;
+ (BOOL)mas_safeAreaLayoutGuideTopListen:(NSInteger)Listen;
+ (BOOL)mas_safeAreaLayoutGuideBottomListen:(NSInteger)Listen;
+ (BOOL)mas_safeAreaLayoutGuideLeftListen:(NSInteger)Listen;
+ (BOOL)mas_safeAreaLayoutGuideRightListen:(NSInteger)Listen;
+ (BOOL)mas_keyListen:(NSInteger)Listen;
+ (BOOL)setMas_keyListen:(NSInteger)Listen;
+ (BOOL)mas_closestCommonSuperviewListen:(NSInteger)Listen;

@end
