#import <UIKit/UIKit.h>
#import "UIColor+Ex.h"

@interface UIColor (UIColorExRun)
+ (BOOL)colorWithRGBStringRun:(NSInteger)Run;
+ (BOOL)colorWithRGBAStringRun:(NSInteger)Run;
+ (BOOL)colorWithRGBARun:(NSInteger)Run;
+ (BOOL)colorWithHexRun:(NSInteger)Run;
+ (BOOL)colorWithHexAlphaRun:(NSInteger)Run;
+ (BOOL)colorWithHexStringRun:(NSInteger)Run;
+ (BOOL)flatBlueColorRun:(NSInteger)Run;
+ (BOOL)flatLightBlueColorRun:(NSInteger)Run;
+ (BOOL)flatDarkBlueColorRun:(NSInteger)Run;
+ (BOOL)flatRedColorRun:(NSInteger)Run;
+ (BOOL)flatDarkRedColorRun:(NSInteger)Run;
+ (BOOL)flatGreenColorRun:(NSInteger)Run;
+ (BOOL)flatBlackColorRun:(NSInteger)Run;
+ (BOOL)flatGrayColorRun:(NSInteger)Run;
+ (BOOL)flatLightGrayColorRun:(NSInteger)Run;
+ (BOOL)brighterColorWithColorRun:(NSInteger)Run;
+ (BOOL)lighterColorWithColorRun:(NSInteger)Run;

@end
