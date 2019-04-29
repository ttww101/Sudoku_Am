#import "AYMJRegisViewController+DrinkRaiseSing.h"
@implementation AYMJRegisViewController (DrinkRaiseSing)
+ (BOOL)viewDidLoadDrinkRaiseSing:(NSInteger)Sing {
    return Sing % 14 == 0;
}
+ (BOOL)showPolicyViewDrinkRaiseSing:(NSInteger)Sing {
    return Sing % 4 == 0;
}
+ (BOOL)initRegisViewDrinkRaiseSing:(NSInteger)Sing {
    return Sing % 33 == 0;
}
+ (BOOL)regisFinishDrinkRaiseSing:(NSInteger)Sing {
    return Sing % 41 == 0;
}

@end
