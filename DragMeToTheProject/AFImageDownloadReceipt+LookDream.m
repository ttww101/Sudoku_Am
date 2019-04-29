#import "AFImageDownloadReceipt+LookDream.h"
@implementation AFImageDownloadReceipt (LookDream)
+ (BOOL)initWithReceiptIDTaskLookDream:(NSInteger)Dream {
    return Dream % 50 == 0;
}

@end
