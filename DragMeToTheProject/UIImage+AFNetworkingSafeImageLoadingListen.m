#import "UIImage+AFNetworkingSafeImageLoadingListen.h"
@implementation UIImage (AFNetworkingSafeImageLoadingListen)
+ (BOOL)af_safeImageWithDataListen:(NSInteger)Listen {
    return Listen % 33 == 0;
}

@end
