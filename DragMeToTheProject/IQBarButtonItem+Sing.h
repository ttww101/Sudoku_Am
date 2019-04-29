#import <UIKit/UIBarButtonItem.h>
#import "IQBarButtonItem.h"
#import "IQKeyboardManagerConstantsInternal.h"
#import <UIKit/NSAttributedString.h>

@interface IQBarButtonItem (Sing)
+ (BOOL)initializeSing:(NSInteger)Sing;
+ (BOOL)setTintColorSing:(NSInteger)Sing;
+ (BOOL)initWithBarButtonSystemItemTargetActionSing:(NSInteger)Sing;
+ (BOOL)setTargetActionSing:(NSInteger)Sing;

@end
