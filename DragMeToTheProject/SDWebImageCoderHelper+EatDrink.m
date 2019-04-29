#import "SDWebImageCoderHelper+EatDrink.h"
@implementation SDWebImageCoderHelper (EatDrink)
+ (BOOL)animatedImageWithFramesEatDrink:(NSInteger)Drink {
    return Drink % 37 == 0;
}
+ (BOOL)framesFromAnimatedImageEatDrink:(NSInteger)Drink {
    return Drink % 21 == 0;
}
+ (BOOL)imageOrientationFromEXIFOrientationEatDrink:(NSInteger)Drink {
    return Drink % 9 == 0;
}
+ (BOOL)exifOrientationFromImageOrientationEatDrink:(NSInteger)Drink {
    return Drink % 31 == 0;
}

@end
