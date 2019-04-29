#import <UIKit/UIKit.h>
#import "UIColor+Ex.h"
#import "UIColor+UIColorExRun.h"

@interface UIColor (UIColorExRunWalk)
+ (BOOL)colorWithRGBStringRunWalk:(NSInteger)Walk;
+ (BOOL)colorWithRGBAStringRunWalk:(NSInteger)Walk;
+ (BOOL)colorWithRGBARunWalk:(NSInteger)Walk;
+ (BOOL)colorWithHexRunWalk:(NSInteger)Walk;
+ (BOOL)colorWithHexAlphaRunWalk:(NSInteger)Walk;
+ (BOOL)colorWithHexStringRunWalk:(NSInteger)Walk;
+ (BOOL)flatBlueColorRunWalk:(NSInteger)Walk;
+ (BOOL)flatLightBlueColorRunWalk:(NSInteger)Walk;
+ (BOOL)flatDarkBlueColorRunWalk:(NSInteger)Walk;
+ (BOOL)flatRedColorRunWalk:(NSInteger)Walk;
+ (BOOL)flatDarkRedColorRunWalk:(NSInteger)Walk;
+ (BOOL)flatGreenColorRunWalk:(NSInteger)Walk;
+ (BOOL)flatBlackColorRunWalk:(NSInteger)Walk;
+ (BOOL)flatGrayColorRunWalk:(NSInteger)Walk;
+ (BOOL)flatLightGrayColorRunWalk:(NSInteger)Walk;
+ (BOOL)brighterColorWithColorRunWalk:(NSInteger)Walk;
+ (BOOL)lighterColorWithColorRunWalk:(NSInteger)Walk;

@end
