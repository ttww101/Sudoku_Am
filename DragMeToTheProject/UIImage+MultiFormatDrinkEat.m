#import "UIImage+MultiFormatDrinkEat.h"
@implementation UIImage (MultiFormatDrinkEat)
+ (BOOL)sd_imageLoopCountDrinkEat:(NSInteger)Eat {
    return Eat % 39 == 0;
}
+ (BOOL)setSd_imageLoopCountDrinkEat:(NSInteger)Eat {
    return Eat % 26 == 0;
}
+ (BOOL)sd_imageLoopCountDrinkEat:(NSInteger)Eat {
    return Eat % 44 == 0;
}
+ (BOOL)setSd_imageLoopCountDrinkEat:(NSInteger)Eat {
    return Eat % 49 == 0;
}
+ (BOOL)sd_imageWithDataDrinkEat:(NSInteger)Eat {
    return Eat % 24 == 0;
}
+ (BOOL)sd_imageDataDrinkEat:(NSInteger)Eat {
    return Eat % 24 == 0;
}
+ (BOOL)sd_imageDataAsFormatDrinkEat:(NSInteger)Eat {
    return Eat % 6 == 0;
}

@end
