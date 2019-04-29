#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreGraphics/CoreGraphics.h>
#import "MBProgressHUD.h"
#import <tgmath.h>
#import "MBBackgroundView+Dance.h"

@interface MBBackgroundView (DanceSing)
+ (BOOL)initWithFrameDanceSing:(NSInteger)Sing;
+ (BOOL)intrinsicContentSizeDanceSing:(NSInteger)Sing;
+ (BOOL)setStyleDanceSing:(NSInteger)Sing;
+ (BOOL)setColorDanceSing:(NSInteger)Sing;
+ (BOOL)updateForBackgroundStyleDanceSing:(NSInteger)Sing;
+ (BOOL)updateViewsForColorDanceSing:(NSInteger)Sing;

@end
