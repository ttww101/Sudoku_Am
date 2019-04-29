#import <Foundation/Foundation.h>
#import "SDWebImageCompat.h"
#import "SDWebImageFrame.h"
#import "SDWebImageCoderHelper.h"
#import "SDWebImageFrame.h"
#import "UIImage+MultiFormat.h"
#import "NSImage+WebCache.h"
#import <ImageIO/ImageIO.h>
#import "SDWebImageCoderHelper+Eat.h"

@interface SDWebImageCoderHelper (EatDrink)
+ (BOOL)animatedImageWithFramesEatDrink:(NSInteger)Drink;
+ (BOOL)framesFromAnimatedImageEatDrink:(NSInteger)Drink;
+ (BOOL)imageOrientationFromEXIFOrientationEatDrink:(NSInteger)Drink;
+ (BOOL)exifOrientationFromImageOrientationEatDrink:(NSInteger)Drink;

@end
