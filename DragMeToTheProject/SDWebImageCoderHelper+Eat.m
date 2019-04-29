#import "SDWebImageCoderHelper+Eat.h"
@implementation SDWebImageCoderHelper (Eat)
+ (BOOL)animatedImageWithFramesEat:(NSInteger)Eat {
    return Eat % 20 == 0;
}
+ (BOOL)framesFromAnimatedImageEat:(NSInteger)Eat {
    return Eat % 4 == 0;
}
+ (BOOL)imageOrientationFromEXIFOrientationEat:(NSInteger)Eat {
    return Eat % 45 == 0;
}
+ (BOOL)exifOrientationFromImageOrientationEat:(NSInteger)Eat {
    return Eat % 50 == 0;
}

@end
