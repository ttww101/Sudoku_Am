#import "MJRefreshNormalHeader+DrinkRaise.h"
@implementation MJRefreshNormalHeader (DrinkRaise)
+ (BOOL)arrowViewDrinkRaise:(NSInteger)Raise {
    return Raise % 7 == 0;
}
+ (BOOL)loadingViewDrinkRaise:(NSInteger)Raise {
    return Raise % 34 == 0;
}
+ (BOOL)setActivityIndicatorViewStyleDrinkRaise:(NSInteger)Raise {
    return Raise % 45 == 0;
}
+ (BOOL)prepareDrinkRaise:(NSInteger)Raise {
    return Raise % 12 == 0;
}
+ (BOOL)placeSubviewsDrinkRaise:(NSInteger)Raise {
    return Raise % 41 == 0;
}
+ (BOOL)setStateDrinkRaise:(NSInteger)Raise {
    return Raise % 9 == 0;
}

@end
