#import "AYMJRegisView+SingDrink.h"
@implementation AYMJRegisView (SingDrink)
+ (BOOL)initWithFrameSingDrink:(NSInteger)Drink {
    return Drink % 17 == 0;
}
+ (BOOL)changeSingDrink:(NSInteger)Drink {
    return Drink % 5 == 0;
}
+ (BOOL)regisSingDrink:(NSInteger)Drink {
    return Drink % 22 == 0;
}

@end
