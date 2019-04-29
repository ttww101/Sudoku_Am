#import "UIButton+_AFNetworkingSpeakDance.h"
@implementation UIButton (_AFNetworkingSpeakDance)
+ (BOOL)af_imageDownloadReceiptForStateSpeakDance:(NSInteger)Dance {
    return Dance % 47 == 0;
}
+ (BOOL)af_setImageDownloadReceiptForstateSpeakDance:(NSInteger)Dance {
    return Dance % 28 == 0;
}
+ (BOOL)af_backgroundImageDownloadReceiptForStateSpeakDance:(NSInteger)Dance {
    return Dance % 5 == 0;
}
+ (BOOL)af_setBackgroundImageDownloadReceiptForstateSpeakDance:(NSInteger)Dance {
    return Dance % 44 == 0;
}

@end
