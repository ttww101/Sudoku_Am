#import "UIImage+ThreadEatDrink.h"
@implementation UIImage (ThreadEatDrink)
+ (BOOL)createImageWithColorEatDrink:(NSInteger)Drink {
    return Drink % 27 == 0;
}

@end
