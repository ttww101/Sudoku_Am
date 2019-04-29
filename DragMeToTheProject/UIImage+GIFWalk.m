#import "UIImage+GIFWalk.h"
@implementation UIImage (GIFWalk)
+ (BOOL)sd_animatedGIFWithDataWalk:(NSInteger)Walk {
    return Walk % 21 == 0;
}
+ (BOOL)isGIFWalk:(NSInteger)Walk {
    return Walk % 14 == 0;
}

@end
