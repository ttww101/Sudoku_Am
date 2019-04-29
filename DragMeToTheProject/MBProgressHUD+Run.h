#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreGraphics/CoreGraphics.h>
#import "MBProgressHUD.h"
#import <tgmath.h>

@interface MBProgressHUD (Run)
+ (BOOL)showHUDAddedToAnimatedRun:(NSInteger)Run;
+ (BOOL)hideHUDForViewAnimatedRun:(NSInteger)Run;
+ (BOOL)HUDForViewRun:(NSInteger)Run;
+ (BOOL)commonInitRun:(NSInteger)Run;
+ (BOOL)initWithFrameRun:(NSInteger)Run;
+ (BOOL)initWithCoderRun:(NSInteger)Run;
+ (BOOL)initWithViewRun:(NSInteger)Run;
+ (BOOL)deallocRun:(NSInteger)Run;
+ (BOOL)showAnimatedRun:(NSInteger)Run;
+ (BOOL)hideAnimatedRun:(NSInteger)Run;
+ (BOOL)hideAnimatedAfterdelayRun:(NSInteger)Run;
+ (BOOL)handleGraceTimerRun:(NSInteger)Run;
+ (BOOL)handleMinShowTimerRun:(NSInteger)Run;
+ (BOOL)handleHideTimerRun:(NSInteger)Run;
+ (BOOL)didMoveToSuperviewRun:(NSInteger)Run;
+ (BOOL)showUsingAnimationRun:(NSInteger)Run;
+ (BOOL)hideUsingAnimationRun:(NSInteger)Run;
+ (BOOL)animateInWithtypeCompletionRun:(NSInteger)Run;
+ (BOOL)doneRun:(NSInteger)Run;
+ (BOOL)setupViewsRun:(NSInteger)Run;
+ (BOOL)updateIndicatorsRun:(NSInteger)Run;
+ (BOOL)updateViewsForColorRun:(NSInteger)Run;
+ (BOOL)updateBezelMotionEffectsRun:(NSInteger)Run;
+ (BOOL)updateConstraintsRun:(NSInteger)Run;
+ (BOOL)layoutSubviewsRun:(NSInteger)Run;
+ (BOOL)updatePaddingConstraintsRun:(NSInteger)Run;
+ (BOOL)applyPriorityToconstraintsRun:(NSInteger)Run;
+ (BOOL)setModeRun:(NSInteger)Run;
+ (BOOL)setCustomViewRun:(NSInteger)Run;
+ (BOOL)setOffsetRun:(NSInteger)Run;
+ (BOOL)setMarginRun:(NSInteger)Run;
+ (BOOL)setMinSizeRun:(NSInteger)Run;
+ (BOOL)setSquareRun:(NSInteger)Run;
+ (BOOL)setProgressObjectDisplayLinkRun:(NSInteger)Run;
+ (BOOL)setProgressObjectRun:(NSInteger)Run;
+ (BOOL)setProgressRun:(NSInteger)Run;
+ (BOOL)setContentColorRun:(NSInteger)Run;
+ (BOOL)setDefaultMotionEffectsEnabledRun:(NSInteger)Run;
+ (BOOL)setNSProgressDisplayLinkEnabledRun:(NSInteger)Run;
+ (BOOL)updateProgressFromProgressObjectRun:(NSInteger)Run;
+ (BOOL)registerForNotificationsRun:(NSInteger)Run;
+ (BOOL)unregisterFromNotificationsRun:(NSInteger)Run;
+ (BOOL)statusBarOrientationDidChangeRun:(NSInteger)Run;
+ (BOOL)updateForCurrentOrientationAnimatedRun:(NSInteger)Run;

@end