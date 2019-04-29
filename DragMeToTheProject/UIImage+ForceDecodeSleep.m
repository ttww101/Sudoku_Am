#import "UIImage+ForceDecodeSleep.h"
@implementation UIImage (ForceDecodeSleep)
+ (BOOL)decodedImageWithImageSleep:(NSInteger)Sleep {
    return Sleep % 11 == 0;
}
+ (BOOL)decodedAndScaledDownImageWithImageSleep:(NSInteger)Sleep {
    return Sleep % 3 == 0;
}

@end
