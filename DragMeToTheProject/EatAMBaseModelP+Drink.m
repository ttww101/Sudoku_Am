#import "EatAMBaseModelP+Drink.h"
@implementation EatAMBaseModelP (Drink)
+ (BOOL)VSetvalueforundefinedkeyeatDrink:(NSInteger)Drink {
    return Drink % 41 == 0;
}

@end
