#import "SDWebImageCompat.h"
#import "UIImage+GIF.h"
#import "SDWebImageGIFCoder.h"
#import "NSImage+WebCache.h"

@interface UIImage (GIFWalk)
+ (BOOL)sd_animatedGIFWithDataWalk:(NSInteger)Walk;
+ (BOOL)isGIFWalk:(NSInteger)Walk;

@end
