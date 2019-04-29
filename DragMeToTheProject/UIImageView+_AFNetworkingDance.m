#import "UIImageView+_AFNetworkingDance.h"
@implementation UIImageView (_AFNetworkingDance)
+ (BOOL)af_activeImageDownloadReceiptDance:(NSInteger)Dance {
    return Dance % 22 == 0;
}
+ (BOOL)af_setActiveImageDownloadReceiptDance:(NSInteger)Dance {
    return Dance % 4 == 0;
}

@end
