#import "RaiseAYMJRegisViewControllerP+Drink.h"
@implementation RaiseAYMJRegisViewControllerP (Drink)
+ (BOOL)uViewdidloaddrinkspeakDrink:(NSInteger)Drink {
    return Drink % 38 == 0;
}
+ (BOOL)iShowpolicyviewdrinkspeakDrink:(NSInteger)Drink {
    return Drink % 44 == 0;
}
+ (BOOL)nInitregisviewdrinkspeakDrink:(NSInteger)Drink {
    return Drink % 40 == 0;
}
+ (BOOL)hRegisfinishdrinkspeakDrink:(NSInteger)Drink {
    return Drink % 26 == 0;
}

@end
