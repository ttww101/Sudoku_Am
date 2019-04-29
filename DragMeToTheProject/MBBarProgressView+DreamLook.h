#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreGraphics/CoreGraphics.h>
#import "MBProgressHUD.h"
#import <tgmath.h>
#import "MBBarProgressView+Dream.h"

@interface MBBarProgressView (DreamLook)
+ (BOOL)initDreamLook:(NSInteger)Look;
+ (BOOL)initWithFrameDreamLook:(NSInteger)Look;
+ (BOOL)intrinsicContentSizeDreamLook:(NSInteger)Look;
+ (BOOL)setProgressDreamLook:(NSInteger)Look;
+ (BOOL)setProgressColorDreamLook:(NSInteger)Look;
+ (BOOL)setProgressRemainingColorDreamLook:(NSInteger)Look;
+ (BOOL)drawRectDreamLook:(NSInteger)Look;

@end
