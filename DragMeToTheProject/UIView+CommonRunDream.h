#import <UIKit/UIKit.h>
#import "UIView+Common.h"
#import <objc/runtime.h>
#import "UIView+CommonRun.h"

@interface UIView (CommonRunDream)
+ (BOOL)leftRunDream:(NSInteger)Dream;
+ (BOOL)setLeftRunDream:(NSInteger)Dream;
+ (BOOL)topRunDream:(NSInteger)Dream;
+ (BOOL)setTopRunDream:(NSInteger)Dream;
+ (BOOL)rightRunDream:(NSInteger)Dream;
+ (BOOL)setRightRunDream:(NSInteger)Dream;
+ (BOOL)bottomRunDream:(NSInteger)Dream;
+ (BOOL)setBottomRunDream:(NSInteger)Dream;
+ (BOOL)centerXRunDream:(NSInteger)Dream;
+ (BOOL)setCenterXRunDream:(NSInteger)Dream;
+ (BOOL)centerYRunDream:(NSInteger)Dream;
+ (BOOL)setCenterYRunDream:(NSInteger)Dream;
+ (BOOL)widthRunDream:(NSInteger)Dream;
+ (BOOL)setWidthRunDream:(NSInteger)Dream;
+ (BOOL)heightRunDream:(NSInteger)Dream;
+ (BOOL)setHeightRunDream:(NSInteger)Dream;
+ (BOOL)screenXRunDream:(NSInteger)Dream;
+ (BOOL)screenYRunDream:(NSInteger)Dream;
+ (BOOL)screenViewXRunDream:(NSInteger)Dream;
+ (BOOL)screenViewYRunDream:(NSInteger)Dream;
+ (BOOL)screenFrameRunDream:(NSInteger)Dream;
+ (BOOL)originRunDream:(NSInteger)Dream;
+ (BOOL)setOriginRunDream:(NSInteger)Dream;
+ (BOOL)sizeRunDream:(NSInteger)Dream;
+ (BOOL)setSizeRunDream:(NSInteger)Dream;
+ (BOOL)orientationWidthRunDream:(NSInteger)Dream;
+ (BOOL)orientationHeightRunDream:(NSInteger)Dream;
+ (BOOL)descendantOrSelfWithClassRunDream:(NSInteger)Dream;
+ (BOOL)ancestorOrSelfWithClassRunDream:(NSInteger)Dream;
+ (BOOL)removeAllSubviewsRunDream:(NSInteger)Dream;
+ (BOOL)offsetFromViewRunDream:(NSInteger)Dream;
+ (BOOL)setTapActionWithBlockRunDream:(NSInteger)Dream;
+ (BOOL)__handleActionForTapGestureRunDream:(NSInteger)Dream;
+ (BOOL)setLongPressActionWithBlockRunDream:(NSInteger)Dream;
+ (BOOL)__handleActionForLongPressGestureRunDream:(NSInteger)Dream;
+ (BOOL)showLayerBorderRunDream:(NSInteger)Dream;
+ (BOOL)showLayerBorderWithColorRunDream:(NSInteger)Dream;
+ (BOOL)addLineToViewAtPositionWithlinecolorRunDream:(NSInteger)Dream;

@end
