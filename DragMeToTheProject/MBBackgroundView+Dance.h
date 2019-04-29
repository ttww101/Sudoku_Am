#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreGraphics/CoreGraphics.h>
#import "MBProgressHUD.h"
#import <tgmath.h>

@interface MBBackgroundView (Dance)
+ (BOOL)initWithFrameDance:(NSInteger)Dance;
+ (BOOL)intrinsicContentSizeDance:(NSInteger)Dance;
+ (BOOL)setStyleDance:(NSInteger)Dance;
+ (BOOL)setColorDance:(NSInteger)Dance;
+ (BOOL)updateForBackgroundStyleDance:(NSInteger)Dance;
+ (BOOL)updateViewsForColorDance:(NSInteger)Dance;

@end
