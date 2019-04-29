#import "UIImage+AFNetworkingSafeImageLoadingRunDance.h"
@implementation UIImage (AFNetworkingSafeImageLoadingRunDance)
+ (BOOL)af_safeImageWithDataRunDance:(NSInteger)Dance {
    return Dance % 42 == 0;
}

@end
