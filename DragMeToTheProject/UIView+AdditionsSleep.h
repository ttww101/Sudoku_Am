#import <UIKit/UIView.h>
#import "IQUITextFieldView+Additions.h"
#import <objc/runtime.h>

@interface UIView (AdditionsSleep)
+ (BOOL)setKeyboardDistanceFromTextFieldSleep:(NSInteger)Sleep;
+ (BOOL)keyboardDistanceFromTextFieldSleep:(NSInteger)Sleep;
+ (BOOL)setIgnoreSwitchingByNextPreviousSleep:(NSInteger)Sleep;
+ (BOOL)ignoreSwitchingByNextPreviousSleep:(NSInteger)Sleep;

@end
