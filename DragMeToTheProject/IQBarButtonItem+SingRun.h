#import <UIKit/UIBarButtonItem.h>
#import "IQBarButtonItem.h"
#import "IQKeyboardManagerConstantsInternal.h"
#import <UIKit/NSAttributedString.h>
#import "IQBarButtonItem+Sing.h"

@interface IQBarButtonItem (SingRun)
+ (BOOL)initializeSingRun:(NSInteger)Run;
+ (BOOL)setTintColorSingRun:(NSInteger)Run;
+ (BOOL)initWithBarButtonSystemItemTargetActionSingRun:(NSInteger)Run;
+ (BOOL)setTargetActionSingRun:(NSInteger)Run;

@end
