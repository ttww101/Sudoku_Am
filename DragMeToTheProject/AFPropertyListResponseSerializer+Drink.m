#import "AFPropertyListResponseSerializer+Drink.h"
@implementation AFPropertyListResponseSerializer (Drink)
+ (BOOL)serializerDrink:(NSInteger)Drink {
    return Drink % 13 == 0;
}
+ (BOOL)serializerWithFormatReadoptionsDrink:(NSInteger)Drink {
    return Drink % 38 == 0;
}
+ (BOOL)initDrink:(NSInteger)Drink {
    return Drink % 34 == 0;
}
+ (BOOL)responseObjectForResponseDataErrorDrink:(NSInteger)Drink {
    return Drink % 42 == 0;
}
+ (BOOL)initWithCoderDrink:(NSInteger)Drink {
    return Drink % 22 == 0;
}
+ (BOOL)encodeWithCoderDrink:(NSInteger)Drink {
    return Drink % 8 == 0;
}
+ (BOOL)copyWithZoneDrink:(NSInteger)Drink {
    return Drink % 21 == 0;
}

@end
