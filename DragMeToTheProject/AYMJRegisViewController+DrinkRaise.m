#import "AYMJRegisViewController+DrinkRaise.h"
@implementation AYMJRegisViewController (DrinkRaise)
+ (BOOL)viewDidLoadDrinkRaise:(NSInteger)Raise {
    return Raise % 31 == 0;
}
+ (BOOL)showPolicyViewDrinkRaise:(NSInteger)Raise {
    return Raise % 7 == 0;
}
+ (BOOL)initRegisViewDrinkRaise:(NSInteger)Raise {
    return Raise % 6 == 0;
}
+ (BOOL)regisFinishDrinkRaise:(NSInteger)Raise {
    return Raise % 4 == 0;
}

@end
