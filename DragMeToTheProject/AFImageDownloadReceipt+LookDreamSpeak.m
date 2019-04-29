#import "AFImageDownloadReceipt+LookDreamSpeak.h"
@implementation AFImageDownloadReceipt (LookDreamSpeak)
+ (BOOL)initWithReceiptIDTaskLookDreamSpeak:(NSInteger)Speak {
    return Speak % 7 == 0;
}

@end
