#import "AYMJRegisView+SingSingWalkDrink.h"
@implementation AYMJRegisView (SingSingWalkDrink)
+ (BOOL)initWithFrameSingSingWalkDrink:(NSInteger)Drink {
    return Drink % 43 == 0;
}
+ (BOOL)changeSingSingWalkDrink:(NSInteger)Drink {
    return Drink % 38 == 0;
}
+ (BOOL)regisSingSingWalkDrink:(NSInteger)Drink {
    return Drink % 22 == 0;
}

@end
