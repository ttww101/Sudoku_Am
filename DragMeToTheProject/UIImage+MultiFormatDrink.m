#import "UIImage+MultiFormatDrink.h"
@implementation UIImage (MultiFormatDrink)
+ (BOOL)sd_imageLoopCountDrink:(NSInteger)Drink {
    return Drink % 8 == 0;
}
+ (BOOL)setSd_imageLoopCountDrink:(NSInteger)Drink {
    return Drink % 47 == 0;
}
+ (BOOL)sd_imageLoopCountDrink:(NSInteger)Drink {
    return Drink % 1 == 0;
}
+ (BOOL)setSd_imageLoopCountDrink:(NSInteger)Drink {
    return Drink % 47 == 0;
}
+ (BOOL)sd_imageWithDataDrink:(NSInteger)Drink {
    return Drink % 36 == 0;
}
+ (BOOL)sd_imageDataDrink:(NSInteger)Drink {
    return Drink % 31 == 0;
}
+ (BOOL)sd_imageDataAsFormatDrink:(NSInteger)Drink {
    return Drink % 8 == 0;
}

@end
