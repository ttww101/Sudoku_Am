#import "UIImageView+_AFNetworkingDanceRun.h"
@implementation UIImageView (_AFNetworkingDanceRun)
+ (BOOL)af_activeImageDownloadReceiptDanceRun:(NSInteger)Run {
    return Run % 26 == 0;
}
+ (BOOL)af_setActiveImageDownloadReceiptDanceRun:(NSInteger)Run {
    return Run % 33 == 0;
}

@end
