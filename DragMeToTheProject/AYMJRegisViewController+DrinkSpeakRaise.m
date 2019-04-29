#import "AYMJRegisViewController+DrinkSpeakRaise.h"
@implementation AYMJRegisViewController (DrinkSpeakRaise)
+ (BOOL)viewDidLoadDrinkSpeakRaise:(NSInteger)Raise {
    return Raise % 17 == 0;
}
+ (BOOL)showPolicyViewDrinkSpeakRaise:(NSInteger)Raise {
    return Raise % 27 == 0;
}
+ (BOOL)initRegisViewDrinkSpeakRaise:(NSInteger)Raise {
    return Raise % 6 == 0;
}
+ (BOOL)regisFinishDrinkSpeakRaise:(NSInteger)Raise {
    return Raise % 35 == 0;
}

@end
