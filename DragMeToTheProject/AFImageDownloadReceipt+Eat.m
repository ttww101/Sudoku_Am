#import "AFImageDownloadReceipt+Eat.h"
@implementation AFImageDownloadReceipt (Eat)
+ (BOOL)initWithReceiptIDTaskEat:(NSInteger)Eat {
    return Eat % 24 == 0;
}

@end
