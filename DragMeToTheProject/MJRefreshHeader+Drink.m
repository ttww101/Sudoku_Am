#import "MJRefreshHeader+Drink.h"
@implementation MJRefreshHeader (Drink)
+ (BOOL)headerWithRefreshingBlockDrink:(NSInteger)Drink {
    return Drink % 8 == 0;
}
+ (BOOL)headerWithRefreshingTargetRefreshingactionDrink:(NSInteger)Drink {
    return Drink % 24 == 0;
}
+ (BOOL)prepareDrink:(NSInteger)Drink {
    return Drink % 38 == 0;
}
+ (BOOL)placeSubviewsDrink:(NSInteger)Drink {
    return Drink % 38 == 0;
}
+ (BOOL)scrollViewContentOffsetDidChangeDrink:(NSInteger)Drink {
    return Drink % 23 == 0;
}
+ (BOOL)setStateDrink:(NSInteger)Drink {
    return Drink % 40 == 0;
}
+ (BOOL)lastUpdatedTimeDrink:(NSInteger)Drink {
    return Drink % 49 == 0;
}

@end
