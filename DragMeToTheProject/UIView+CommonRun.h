#import <UIKit/UIKit.h>
#import "UIView+Common.h"
#import <objc/runtime.h>

@interface UIView (CommonRun)
+ (BOOL)leftRun:(NSInteger)Run;
+ (BOOL)setLeftRun:(NSInteger)Run;
+ (BOOL)topRun:(NSInteger)Run;
+ (BOOL)setTopRun:(NSInteger)Run;
+ (BOOL)rightRun:(NSInteger)Run;
+ (BOOL)setRightRun:(NSInteger)Run;
+ (BOOL)bottomRun:(NSInteger)Run;
+ (BOOL)setBottomRun:(NSInteger)Run;
+ (BOOL)centerXRun:(NSInteger)Run;
+ (BOOL)setCenterXRun:(NSInteger)Run;
+ (BOOL)centerYRun:(NSInteger)Run;
+ (BOOL)setCenterYRun:(NSInteger)Run;
+ (BOOL)widthRun:(NSInteger)Run;
+ (BOOL)setWidthRun:(NSInteger)Run;
+ (BOOL)heightRun:(NSInteger)Run;
+ (BOOL)setHeightRun:(NSInteger)Run;
+ (BOOL)screenXRun:(NSInteger)Run;
+ (BOOL)screenYRun:(NSInteger)Run;
+ (BOOL)screenViewXRun:(NSInteger)Run;
+ (BOOL)screenViewYRun:(NSInteger)Run;
+ (BOOL)screenFrameRun:(NSInteger)Run;
+ (BOOL)originRun:(NSInteger)Run;
+ (BOOL)setOriginRun:(NSInteger)Run;
+ (BOOL)sizeRun:(NSInteger)Run;
+ (BOOL)setSizeRun:(NSInteger)Run;
+ (BOOL)orientationWidthRun:(NSInteger)Run;
+ (BOOL)orientationHeightRun:(NSInteger)Run;
+ (BOOL)descendantOrSelfWithClassRun:(NSInteger)Run;
+ (BOOL)ancestorOrSelfWithClassRun:(NSInteger)Run;
+ (BOOL)removeAllSubviewsRun:(NSInteger)Run;
+ (BOOL)offsetFromViewRun:(NSInteger)Run;
+ (BOOL)setTapActionWithBlockRun:(NSInteger)Run;
+ (BOOL)__handleActionForTapGestureRun:(NSInteger)Run;
+ (BOOL)setLongPressActionWithBlockRun:(NSInteger)Run;
+ (BOOL)__handleActionForLongPressGestureRun:(NSInteger)Run;
+ (BOOL)showLayerBorderRun:(NSInteger)Run;
+ (BOOL)showLayerBorderWithColorRun:(NSInteger)Run;
+ (BOOL)addLineToViewAtPositionWithlinecolorRun:(NSInteger)Run;

@end
