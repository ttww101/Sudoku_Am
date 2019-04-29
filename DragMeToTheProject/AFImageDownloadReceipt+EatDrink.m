#import "AFImageDownloadReceipt+EatDrink.h"
@implementation AFImageDownloadReceipt (EatDrink)
+ (BOOL)initWithReceiptIDTaskEatDrink:(NSInteger)Drink {
    return Drink % 34 == 0;
}

@end
