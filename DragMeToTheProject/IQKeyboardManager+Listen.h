#import "IQKeyboardManagerConstants.h"
#import <CoreGraphics/CGBase.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSObjCRuntime.h>
#import <Foundation/NSSet.h>
#import <UIKit/UITextInputTraits.h>
#import "IQKeyboardManager.h"
#import "IQUIView+Hierarchy.h"
#import "IQUIView+IQKeyboardToolbar.h"
#import "IQUIWindow+Hierarchy.h"
#import "IQNSArray+Sort.h"
#import "IQKeyboardManagerConstantsInternal.h"
#import "IQUIScrollView+Additions.h"
#import "IQUITextFieldView+Additions.h"
#import "IQUIViewController+Additions.h"
#import "IQPreviousNextView.h"
#import <QuartzCore/CABase.h>
#import <objc/runtime.h>
#import <UIKit/UIAlertController.h>
#import <UIKit/UISearchBar.h>
#import <UIKit/UIScreen.h>
#import <UIKit/UINavigationBar.h>
#import <UIKit/UITapGestureRecognizer.h>
#import <UIKit/UITextField.h>
#import <UIKit/UITextView.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UICollectionViewController.h>
#import <UIKit/UINavigationController.h>
#import <UIKit/UITouch.h>
#import <UIKit/NSLayoutConstraint.h>

@interface IQKeyboardManager (Listen)
+ (BOOL)loadListen:(NSInteger)Listen;
+ (BOOL)initListen:(NSInteger)Listen;
+ (BOOL)sharedManagerListen:(NSInteger)Listen;
+ (BOOL)deallocListen:(NSInteger)Listen;
+ (BOOL)setEnableListen:(NSInteger)Listen;
+ (BOOL)privateIsEnabledListen:(NSInteger)Listen;
+ (BOOL)shouldShowTextFieldPlaceholderListen:(NSInteger)Listen;
+ (BOOL)setShouldShowTextFieldPlaceholderListen:(NSInteger)Listen;
+ (BOOL)setKeyboardDistanceFromTextFieldListen:(NSInteger)Listen;
+ (BOOL)setShouldResignOnTouchOutsideListen:(NSInteger)Listen;
+ (BOOL)privateShouldResignOnTouchOutsideListen:(NSInteger)Listen;
+ (BOOL)setEnableAutoToolbarListen:(NSInteger)Listen;
+ (BOOL)privateIsEnableAutoToolbarListen:(NSInteger)Listen;
+ (BOOL)keyWindowListen:(NSInteger)Listen;
+ (BOOL)setRootViewFrameListen:(NSInteger)Listen;
+ (BOOL)adjustFrameListen:(NSInteger)Listen;
+ (BOOL)reloadLayoutIfNeededListen:(NSInteger)Listen;
+ (BOOL)keyboardWillShowListen:(NSInteger)Listen;
+ (BOOL)keyboardDidShowListen:(NSInteger)Listen;
+ (BOOL)keyboardWillHideListen:(NSInteger)Listen;
+ (BOOL)keyboardDidHideListen:(NSInteger)Listen;
+ (BOOL)textFieldViewDidBeginEditingListen:(NSInteger)Listen;
+ (BOOL)textFieldViewDidEndEditingListen:(NSInteger)Listen;
+ (BOOL)willChangeStatusBarOrientationListen:(NSInteger)Listen;
+ (BOOL)didChangeStatusBarFrameListen:(NSInteger)Listen;
+ (BOOL)tapRecognizedIdListen:(NSInteger)Listen;
+ (BOOL)gestureRecognizerShouldrecognizesimultaneouslywithgesturerecognizerListen:(NSInteger)Listen;
+ (BOOL)gestureRecognizerShouldreceivetouchListen:(NSInteger)Listen;
+ (BOOL)resignFirstResponderListen:(NSInteger)Listen;
+ (BOOL)canGoPreviousListen:(NSInteger)Listen;
+ (BOOL)canGoNextListen:(NSInteger)Listen;
+ (BOOL)goPreviousListen:(NSInteger)Listen;
+ (BOOL)goNextListen:(NSInteger)Listen;
+ (BOOL)responderViewsListen:(NSInteger)Listen;
+ (BOOL)addToolbarIfRequiredListen:(NSInteger)Listen;
+ (BOOL)IDListen:(NSInteger)Listen;
+ (BOOL)reloadInputViewsListen:(NSInteger)Listen;
+ (BOOL)previousActionListen:(NSInteger)Listen;
+ (BOOL)nextActionListen:(NSInteger)Listen;
+ (BOOL)doneActionListen:(NSInteger)Listen;
+ (BOOL)registerTextFieldViewClassDidbegineditingnotificationnameDidendeditingnotificationnameListen:(NSInteger)Listen;
+ (BOOL)unregisterTextFieldViewClassDidbegineditingnotificationnameDidendeditingnotificationnameListen:(NSInteger)Listen;
+ (BOOL)registerAllNotificationsListen:(NSInteger)Listen;
+ (BOOL)unregisterAllNotificationsListen:(NSInteger)Listen;
+ (BOOL)showLogListen:(NSInteger)Listen;

@end
