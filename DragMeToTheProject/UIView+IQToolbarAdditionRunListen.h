#import "IQToolbar.h"
#import <UIKit/UIView.h>
#import "IQUIView+IQKeyboardToolbar.h"
#import "IQKeyboardManagerConstantsInternal.h"
#import "IQKeyboardManager.h"
#import <objc/runtime.h>
#import <UIKit/UIImage.h>
#import <UIKit/UILabel.h>
#import <UIKit/UIAccessibility.h>
#import "UIView+IQToolbarAdditionRun.h"

@interface UIView (IQToolbarAdditionRunListen)
+ (BOOL)keyboardToolbarRunListen:(NSInteger)Listen;
+ (BOOL)setShouldHideToolbarPlaceholderRunListen:(NSInteger)Listen;
+ (BOOL)shouldHideToolbarPlaceholderRunListen:(NSInteger)Listen;
+ (BOOL)setShouldHidePlaceholderTextRunListen:(NSInteger)Listen;
+ (BOOL)shouldHidePlaceholderTextRunListen:(NSInteger)Listen;
+ (BOOL)setToolbarPlaceholderRunListen:(NSInteger)Listen;
+ (BOOL)toolbarPlaceholderRunListen:(NSInteger)Listen;
+ (BOOL)setPlaceholderTextRunListen:(NSInteger)Listen;
+ (BOOL)placeholderTextRunListen:(NSInteger)Listen;
+ (BOOL)drawingToolbarPlaceholderRunListen:(NSInteger)Listen;
+ (BOOL)drawingPlaceholderTextRunListen:(NSInteger)Listen;
+ (BOOL)flexibleBarButtonItemRunListen:(NSInteger)Listen;
+ (BOOL)addRightButtonOnKeyboardWithImageTargetActionTitletextRunListen:(NSInteger)Listen;
+ (BOOL)addRightButtonOnKeyboardWithImageTargetActionShouldshowplaceholderRunListen:(NSInteger)Listen;
+ (BOOL)addRightButtonOnKeyboardWithTextTargetActionTitletextRunListen:(NSInteger)Listen;
+ (BOOL)addRightButtonOnKeyboardWithTextTargetActionShouldshowplaceholderRunListen:(NSInteger)Listen;
+ (BOOL)addRightButtonOnKeyboardWithTextTargetActionRunListen:(NSInteger)Listen;
+ (BOOL)addDoneOnKeyboardWithTargetActionTitletextRunListen:(NSInteger)Listen;
+ (BOOL)addDoneOnKeyboardWithTargetActionShouldshowplaceholderRunListen:(NSInteger)Listen;
+ (BOOL)addDoneOnKeyboardWithTargetActionRunListen:(NSInteger)Listen;
+ (BOOL)addLeftRightOnKeyboardWithTargetLeftbuttontitleRightbuttontitleLeftbuttonactionRightbuttonactionTitletextRunListen:(NSInteger)Listen;
+ (BOOL)addLeftRightOnKeyboardWithTargetLeftbuttontitleRightbuttontitleLeftbuttonactionRightbuttonactionShouldshowplaceholderRunListen:(NSInteger)Listen;
+ (BOOL)addLeftRightOnKeyboardWithTargetLeftbuttontitleRightbuttontitleLeftbuttonactionRightbuttonactionRunListen:(NSInteger)Listen;
+ (BOOL)addCancelDoneOnKeyboardWithTargetCancelactionDoneactionTitletextRunListen:(NSInteger)Listen;
+ (BOOL)addCancelDoneOnKeyboardWithTargetCancelactionDoneactionShouldshowplaceholderRunListen:(NSInteger)Listen;
+ (BOOL)addCancelDoneOnKeyboardWithTargetCancelactionDoneactionRunListen:(NSInteger)Listen;
+ (BOOL)addPreviousNextDoneOnKeyboardWithTargetPreviousactionNextactionDoneactionTitletextRunListen:(NSInteger)Listen;
+ (BOOL)addPreviousNextDoneOnKeyboardWithTargetPreviousactionNextactionDoneactionShouldshowplaceholderRunListen:(NSInteger)Listen;
+ (BOOL)addPreviousNextDoneOnKeyboardWithTargetPreviousactionNextactionDoneactionRunListen:(NSInteger)Listen;
+ (BOOL)addPreviousNextRightOnKeyboardWithTargetRightbuttonimagePreviousactionNextactionRightbuttonactionTitletextRunListen:(NSInteger)Listen;
+ (BOOL)addPreviousNextRightOnKeyboardWithTargetRightbuttonimagePreviousactionNextactionRightbuttonactionShouldshowplaceholderRunListen:(NSInteger)Listen;
+ (BOOL)addPreviousNextRightOnKeyboardWithTargetRightbuttontitlePreviousactionNextactionRightbuttonactionTitletextRunListen:(NSInteger)Listen;
+ (BOOL)addPreviousNextRightOnKeyboardWithTargetRightbuttontitlePreviousactionNextactionRightbuttonactionShouldshowplaceholderRunListen:(NSInteger)Listen;
+ (BOOL)addPreviousNextRightOnKeyboardWithTargetRightbuttontitlePreviousactionNextactionRightbuttonactionRunListen:(NSInteger)Listen;

@end
