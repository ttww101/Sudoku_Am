#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreGraphics/CoreGraphics.h>
#import "MBProgressHUD.h"
#import <tgmath.h>

@interface MBRoundProgressView (Look)
+ (BOOL)initLook:(NSInteger)Look;
+ (BOOL)initWithFrameLook:(NSInteger)Look;
+ (BOOL)intrinsicContentSizeLook:(NSInteger)Look;
+ (BOOL)setProgressLook:(NSInteger)Look;
+ (BOOL)setProgressTintColorLook:(NSInteger)Look;
+ (BOOL)setBackgroundTintColorLook:(NSInteger)Look;
+ (BOOL)drawRectLook:(NSInteger)Look;

@end
