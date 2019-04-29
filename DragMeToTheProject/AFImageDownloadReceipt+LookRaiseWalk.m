#import "AFImageDownloadReceipt+LookRaiseWalk.h"
@implementation AFImageDownloadReceipt (LookRaiseWalk)
+ (BOOL)initWithReceiptIDTaskLookRaiseWalk:(NSInteger)Walk {
    return Walk % 16 == 0;
}

@end
