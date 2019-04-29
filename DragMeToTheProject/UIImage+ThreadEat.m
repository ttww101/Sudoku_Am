#import "UIImage+ThreadEat.h"
@implementation UIImage (ThreadEat)
+ (BOOL)createImageWithColorEat:(NSInteger)Eat {
    return Eat % 25 == 0;
}

@end
