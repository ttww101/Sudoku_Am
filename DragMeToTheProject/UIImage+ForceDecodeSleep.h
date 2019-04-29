#import "SDWebImageCompat.h"
#import "UIImage+ForceDecode.h"
#import "SDWebImageCodersManager.h"

@interface UIImage (ForceDecodeSleep)
+ (BOOL)decodedImageWithImageSleep:(NSInteger)Sleep;
+ (BOOL)decodedAndScaledDownImageWithImageSleep:(NSInteger)Sleep;

@end
