#import "UIImage+AFNetworkingSafeImageLoadingListenEat.h"
@implementation UIImage (AFNetworkingSafeImageLoadingListenEat)
+ (BOOL)af_safeImageWithDataListenEat:(NSInteger)Eat {
    return Eat % 38 == 0;
}

@end
