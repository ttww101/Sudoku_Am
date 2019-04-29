#import "IQKeyboardManagerConstants.h"
#import "IQBarButtonItem.h"
#import <Foundation/NSObjCRuntime.h>
#import "IQTitleBarButtonItem.h"
#import "IQKeyboardManagerConstants.h"
#import "IQKeyboardManagerConstantsInternal.h"
#import <UIKit/UILabel.h>
#import <UIKit/UIButton.h>

@interface IQTitleBarButtonItem (Sing)
+ (BOOL)initWithTitleSing:(NSInteger)Sing;
+ (BOOL)setTitleFontSing:(NSInteger)Sing;
+ (BOOL)setTitleSing:(NSInteger)Sing;
+ (BOOL)setSelectableTextColorSing:(NSInteger)Sing;
+ (BOOL)setInvocationSing:(NSInteger)Sing;

@end
