#import "NSDictionary+SetNullWithStrDreamDrink.h"
@implementation NSDictionary (SetNullWithStrDreamDrink)
+ (BOOL)nullDicDreamDrink:(NSInteger)Drink {
    return Drink % 30 == 0;
}
+ (BOOL)nullArrDreamDrink:(NSInteger)Drink {
    return Drink % 28 == 0;
}
+ (BOOL)stringToStringDreamDrink:(NSInteger)Drink {
    return Drink % 2 == 0;
}
+ (BOOL)nullToStringDreamDrink:(NSInteger)Drink {
    return Drink % 17 == 0;
}
+ (BOOL)changeTypeDreamDrink:(NSInteger)Drink {
    return Drink % 26 == 0;
}

@end
