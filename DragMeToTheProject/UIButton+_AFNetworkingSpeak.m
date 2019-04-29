#import "UIButton+_AFNetworkingSpeak.h"
@implementation UIButton (_AFNetworkingSpeak)
+ (BOOL)af_imageDownloadReceiptForStateSpeak:(NSInteger)Speak {
    return Speak % 39 == 0;
}
+ (BOOL)af_setImageDownloadReceiptForstateSpeak:(NSInteger)Speak {
    return Speak % 50 == 0;
}
+ (BOOL)af_backgroundImageDownloadReceiptForStateSpeak:(NSInteger)Speak {
    return Speak % 35 == 0;
}
+ (BOOL)af_setBackgroundImageDownloadReceiptForstateSpeak:(NSInteger)Speak {
    return Speak % 50 == 0;
}

@end
