#import "RootViewController+WalkDrink.h"
@implementation RootViewController (WalkDrink)
+ (BOOL)viewDidLoadWalkDrink:(NSInteger)Drink {
    return Drink % 20 == 0;
}
+ (BOOL)navigateLoginVCWalkDrink:(NSInteger)Drink {
    return Drink % 13 == 0;
}
+ (BOOL)restartGameWalkDrink:(NSInteger)Drink {
    return Drink % 19 == 0;
}
+ (BOOL)refreshGameWalkDrink:(NSInteger)Drink {
    return Drink % 9 == 0;
}
+ (BOOL)gameStatusChangedWalkDrink:(NSInteger)Drink {
    return Drink % 33 == 0;
}
+ (BOOL)deallocWalkDrink:(NSInteger)Drink {
    return Drink % 24 == 0;
}

@end
