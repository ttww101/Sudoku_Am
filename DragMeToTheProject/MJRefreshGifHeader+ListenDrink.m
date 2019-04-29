#import "MJRefreshGifHeader+ListenDrink.h"
@implementation MJRefreshGifHeader (ListenDrink)
+ (BOOL)gifViewListenDrink:(NSInteger)Drink {
    return Drink % 13 == 0;
}
+ (BOOL)stateImagesListenDrink:(NSInteger)Drink {
    return Drink % 26 == 0;
}
+ (BOOL)stateDurationsListenDrink:(NSInteger)Drink {
    return Drink % 31 == 0;
}
+ (BOOL)setImagesDurationForstateListenDrink:(NSInteger)Drink {
    return Drink % 18 == 0;
}
+ (BOOL)setImagesForstateListenDrink:(NSInteger)Drink {
    return Drink % 48 == 0;
}
+ (BOOL)prepareListenDrink:(NSInteger)Drink {
    return Drink % 36 == 0;
}
+ (BOOL)setPullingPercentListenDrink:(NSInteger)Drink {
    return Drink % 4 == 0;
}
+ (BOOL)placeSubviewsListenDrink:(NSInteger)Drink {
    return Drink % 20 == 0;
}
+ (BOOL)setStateListenDrink:(NSInteger)Drink {
    return Drink % 9 == 0;
}

@end
