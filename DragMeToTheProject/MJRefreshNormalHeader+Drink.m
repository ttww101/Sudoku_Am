#import "MJRefreshNormalHeader+Drink.h"
@implementation MJRefreshNormalHeader (Drink)
+ (BOOL)arrowViewDrink:(NSInteger)Drink {
    return Drink % 3 == 0;
}
+ (BOOL)loadingViewDrink:(NSInteger)Drink {
    return Drink % 40 == 0;
}
+ (BOOL)setActivityIndicatorViewStyleDrink:(NSInteger)Drink {
    return Drink % 21 == 0;
}
+ (BOOL)prepareDrink:(NSInteger)Drink {
    return Drink % 38 == 0;
}
+ (BOOL)placeSubviewsDrink:(NSInteger)Drink {
    return Drink % 49 == 0;
}
+ (BOOL)setStateDrink:(NSInteger)Drink {
    return Drink % 7 == 0;
}

@end
