#import "IQKeyboardManagerConstants.h"
#import "IQBarButtonItem.h"
#import <Foundation/NSObjCRuntime.h>
#import "IQTitleBarButtonItem.h"
#import "IQKeyboardManagerConstants.h"
#import "IQKeyboardManagerConstantsInternal.h"
#import <UIKit/UILabel.h>
#import <UIKit/UIButton.h>
#import "IQTitleBarButtonItem+Sing.h"

@interface IQTitleBarButtonItem (SingSing)
+ (BOOL)initWithTitleSingSing:(NSInteger)Sing;
+ (BOOL)setTitleFontSingSing:(NSInteger)Sing;
+ (BOOL)setTitleSingSing:(NSInteger)Sing;
+ (BOOL)setSelectableTextColorSingSing:(NSInteger)Sing;
+ (BOOL)setInvocationSingSing:(NSInteger)Sing;

@end
