#import "UIImage+AFNetworkingSafeImageLoadingRun.h"
@implementation UIImage (AFNetworkingSafeImageLoadingRun)
+ (BOOL)af_safeImageWithDataRun:(NSInteger)Run {
    return Run % 13 == 0;
}

@end
