#import <Foundation/Foundation.h>
#import "SDWebImageCompat.h"
#import "SDWebImageFrame.h"
#import "SDWebImageCoderHelper.h"
#import "SDWebImageFrame.h"
#import "UIImage+MultiFormat.h"
#import "NSImage+WebCache.h"
#import <ImageIO/ImageIO.h>

@interface SDWebImageCoderHelper (Eat)
+ (BOOL)animatedImageWithFramesEat:(NSInteger)Eat;
+ (BOOL)framesFromAnimatedImageEat:(NSInteger)Eat;
+ (BOOL)imageOrientationFromEXIFOrientationEat:(NSInteger)Eat;
+ (BOOL)exifOrientationFromImageOrientationEat:(NSInteger)Eat;

@end
