#import "UIView+MJExtensionRunDrink.h"
@implementation UIView (MJExtensionRunDrink)
+ (BOOL)setMj_xRunDrink:(NSInteger)Drink {
    return Drink % 24 == 0;
}
+ (BOOL)mj_xRunDrink:(NSInteger)Drink {
    return Drink % 32 == 0;
}
+ (BOOL)setMj_yRunDrink:(NSInteger)Drink {
    return Drink % 30 == 0;
}
+ (BOOL)mj_yRunDrink:(NSInteger)Drink {
    return Drink % 20 == 0;
}
+ (BOOL)setMj_wRunDrink:(NSInteger)Drink {
    return Drink % 38 == 0;
}
+ (BOOL)mj_wRunDrink:(NSInteger)Drink {
    return Drink % 2 == 0;
}
+ (BOOL)setMj_hRunDrink:(NSInteger)Drink {
    return Drink % 7 == 0;
}
+ (BOOL)mj_hRunDrink:(NSInteger)Drink {
    return Drink % 15 == 0;
}
+ (BOOL)setMj_sizeRunDrink:(NSInteger)Drink {
    return Drink % 30 == 0;
}
+ (BOOL)mj_sizeRunDrink:(NSInteger)Drink {
    return Drink % 31 == 0;
}
+ (BOOL)setMj_originRunDrink:(NSInteger)Drink {
    return Drink % 41 == 0;
}
+ (BOOL)mj_originRunDrink:(NSInteger)Drink {
    return Drink % 37 == 0;
}

@end
