#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreGraphics/CoreGraphics.h>
#import "MBProgressHUD.h"
#import <tgmath.h>
#import "MBRoundProgressView+Look.h"

@interface MBRoundProgressView (LookWalk)
+ (BOOL)initLookWalk:(NSInteger)Walk;
+ (BOOL)initWithFrameLookWalk:(NSInteger)Walk;
+ (BOOL)intrinsicContentSizeLookWalk:(NSInteger)Walk;
+ (BOOL)setProgressLookWalk:(NSInteger)Walk;
+ (BOOL)setProgressTintColorLookWalk:(NSInteger)Walk;
+ (BOOL)setBackgroundTintColorLookWalk:(NSInteger)Walk;
+ (BOOL)drawRectLookWalk:(NSInteger)Walk;

@end
