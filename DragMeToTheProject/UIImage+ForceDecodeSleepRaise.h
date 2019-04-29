#import "SDWebImageCompat.h"
#import "UIImage+ForceDecode.h"
#import "SDWebImageCodersManager.h"
#import "UIImage+ForceDecodeSleep.h"

@interface UIImage (ForceDecodeSleepRaise)
+ (BOOL)decodedImageWithImageSleepRaise:(NSInteger)Raise;
+ (BOOL)decodedAndScaledDownImageWithImageSleepRaise:(NSInteger)Raise;

@end
