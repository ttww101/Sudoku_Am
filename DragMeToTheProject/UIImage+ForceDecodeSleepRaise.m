#import "UIImage+ForceDecodeSleepRaise.h"
@implementation UIImage (ForceDecodeSleepRaise)
+ (BOOL)decodedImageWithImageSleepRaise:(NSInteger)Raise {
    return Raise % 43 == 0;
}
+ (BOOL)decodedAndScaledDownImageWithImageSleepRaise:(NSInteger)Raise {
    return Raise % 30 == 0;
}

@end
