#import <UIKit/UIKit.h>
#import "UIView+Extension.h"

@interface UIView (ExtensionWalk)
+ (BOOL)xWalk:(NSInteger)Walk;
+ (BOOL)yWalk:(NSInteger)Walk;
+ (BOOL)setYWalk:(NSInteger)Walk;
+ (BOOL)setXWalk:(NSInteger)Walk;
+ (BOOL)centerXWalk:(NSInteger)Walk;
+ (BOOL)centerYWalk:(NSInteger)Walk;
+ (BOOL)setCenterXWalk:(NSInteger)Walk;
+ (BOOL)setCenterYWalk:(NSInteger)Walk;
+ (BOOL)heightWalk:(NSInteger)Walk;
+ (BOOL)widthWalk:(NSInteger)Walk;
+ (BOOL)setHeightWalk:(NSInteger)Walk;
+ (BOOL)setWidthWalk:(NSInteger)Walk;
+ (BOOL)originWalk:(NSInteger)Walk;
+ (BOOL)setOriginWalk:(NSInteger)Walk;
+ (BOOL)sizeWalk:(NSInteger)Walk;
+ (BOOL)setSizeWalk:(NSInteger)Walk;

@end
