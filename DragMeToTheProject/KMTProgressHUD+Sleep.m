#import "KMTProgressHUD+Sleep.h"
@implementation KMTProgressHUD (Sleep)
+ (BOOL)mt_showHUDAddedToAnimatedMessageSleep:(NSInteger)Sleep {
    return Sleep % 36 == 0;
}
+ (BOOL)mt_hideHUDForViewAnimatedSleep:(NSInteger)Sleep {
    return Sleep % 16 == 0;
}
+ (BOOL)withMessageAnimatedViewSleep:(NSInteger)Sleep {
    return Sleep % 41 == 0;
}
+ (BOOL)mt_showMessageAnimatedViewCompleteSleep:(NSInteger)Sleep {
    return Sleep % 30 == 0;
}

@end
