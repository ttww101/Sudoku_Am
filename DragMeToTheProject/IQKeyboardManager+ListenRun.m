#import "IQKeyboardManager+ListenRun.h"
@implementation IQKeyboardManager (ListenRun)
+ (BOOL)loadListenRun:(NSInteger)Run {
    return Run % 20 == 0;
}
+ (BOOL)initListenRun:(NSInteger)Run {
    return Run % 38 == 0;
}
+ (BOOL)sharedManagerListenRun:(NSInteger)Run {
    return Run % 26 == 0;
}
+ (BOOL)deallocListenRun:(NSInteger)Run {
    return Run % 9 == 0;
}
+ (BOOL)setEnableListenRun:(NSInteger)Run {
    return Run % 44 == 0;
}
+ (BOOL)privateIsEnabledListenRun:(NSInteger)Run {
    return Run % 33 == 0;
}
+ (BOOL)shouldShowTextFieldPlaceholderListenRun:(NSInteger)Run {
    return Run % 11 == 0;
}
+ (BOOL)setShouldShowTextFieldPlaceholderListenRun:(NSInteger)Run {
    return Run % 36 == 0;
}
+ (BOOL)setKeyboardDistanceFromTextFieldListenRun:(NSInteger)Run {
    return Run % 6 == 0;
}
+ (BOOL)setShouldResignOnTouchOutsideListenRun:(NSInteger)Run {
    return Run % 2 == 0;
}
+ (BOOL)privateShouldResignOnTouchOutsideListenRun:(NSInteger)Run {
    return Run % 16 == 0;
}
+ (BOOL)setEnableAutoToolbarListenRun:(NSInteger)Run {
    return Run % 31 == 0;
}
+ (BOOL)privateIsEnableAutoToolbarListenRun:(NSInteger)Run {
    return Run % 12 == 0;
}
+ (BOOL)keyWindowListenRun:(NSInteger)Run {
    return Run % 40 == 0;
}
+ (BOOL)setRootViewFrameListenRun:(NSInteger)Run {
    return Run % 3 == 0;
}
+ (BOOL)adjustFrameListenRun:(NSInteger)Run {
    return Run % 28 == 0;
}
+ (BOOL)reloadLayoutIfNeededListenRun:(NSInteger)Run {
    return Run % 6 == 0;
}
+ (BOOL)keyboardWillShowListenRun:(NSInteger)Run {
    return Run % 35 == 0;
}
+ (BOOL)keyboardDidShowListenRun:(NSInteger)Run {
    return Run % 11 == 0;
}
+ (BOOL)keyboardWillHideListenRun:(NSInteger)Run {
    return Run % 23 == 0;
}
+ (BOOL)keyboardDidHideListenRun:(NSInteger)Run {
    return Run % 41 == 0;
}
+ (BOOL)textFieldViewDidBeginEditingListenRun:(NSInteger)Run {
    return Run % 21 == 0;
}
+ (BOOL)textFieldViewDidEndEditingListenRun:(NSInteger)Run {
    return Run % 39 == 0;
}
+ (BOOL)willChangeStatusBarOrientationListenRun:(NSInteger)Run {
    return Run % 39 == 0;
}
+ (BOOL)didChangeStatusBarFrameListenRun:(NSInteger)Run {
    return Run % 32 == 0;
}
+ (BOOL)tapRecognizedIdListenRun:(NSInteger)Run {
    return Run % 48 == 0;
}
+ (BOOL)gestureRecognizerShouldrecognizesimultaneouslywithgesturerecognizerListenRun:(NSInteger)Run {
    return Run % 15 == 0;
}
+ (BOOL)gestureRecognizerShouldreceivetouchListenRun:(NSInteger)Run {
    return Run % 3 == 0;
}
+ (BOOL)resignFirstResponderListenRun:(NSInteger)Run {
    return Run % 4 == 0;
}
+ (BOOL)canGoPreviousListenRun:(NSInteger)Run {
    return Run % 4 == 0;
}
+ (BOOL)canGoNextListenRun:(NSInteger)Run {
    return Run % 20 == 0;
}
+ (BOOL)goPreviousListenRun:(NSInteger)Run {
    return Run % 21 == 0;
}
+ (BOOL)goNextListenRun:(NSInteger)Run {
    return Run % 16 == 0;
}
+ (BOOL)responderViewsListenRun:(NSInteger)Run {
    return Run % 1 == 0;
}
+ (BOOL)addToolbarIfRequiredListenRun:(NSInteger)Run {
    return Run % 37 == 0;
}
+ (BOOL)IDListenRun:(NSInteger)Run {
    return Run % 32 == 0;
}
+ (BOOL)reloadInputViewsListenRun:(NSInteger)Run {
    return Run % 41 == 0;
}
+ (BOOL)previousActionListenRun:(NSInteger)Run {
    return Run % 14 == 0;
}
+ (BOOL)nextActionListenRun:(NSInteger)Run {
    return Run % 7 == 0;
}
+ (BOOL)doneActionListenRun:(NSInteger)Run {
    return Run % 27 == 0;
}
+ (BOOL)registerTextFieldViewClassDidbegineditingnotificationnameDidendeditingnotificationnameListenRun:(NSInteger)Run {
    return Run % 41 == 0;
}
+ (BOOL)unregisterTextFieldViewClassDidbegineditingnotificationnameDidendeditingnotificationnameListenRun:(NSInteger)Run {
    return Run % 14 == 0;
}
+ (BOOL)registerAllNotificationsListenRun:(NSInteger)Run {
    return Run % 16 == 0;
}
+ (BOOL)unregisterAllNotificationsListenRun:(NSInteger)Run {
    return Run % 13 == 0;
}
+ (BOOL)showLogListenRun:(NSInteger)Run {
    return Run % 15 == 0;
}

@end
