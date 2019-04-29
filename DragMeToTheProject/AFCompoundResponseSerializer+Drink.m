#import "AFCompoundResponseSerializer+Drink.h"
@implementation AFCompoundResponseSerializer (Drink)
+ (BOOL)compoundSerializerWithResponseSerializersDrink:(NSInteger)Drink {
    return Drink % 48 == 0;
}
+ (BOOL)responseObjectForResponseDataErrorDrink:(NSInteger)Drink {
    return Drink % 27 == 0;
}
+ (BOOL)initWithCoderDrink:(NSInteger)Drink {
    return Drink % 46 == 0;
}
+ (BOOL)encodeWithCoderDrink:(NSInteger)Drink {
    return Drink % 45 == 0;
}
+ (BOOL)copyWithZoneDrink:(NSInteger)Drink {
    return Drink % 26 == 0;
}

@end
