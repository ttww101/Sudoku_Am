#import "AFJSONRequestSerializer+Drink.h"
@implementation AFJSONRequestSerializer (Drink)
+ (BOOL)serializerDrink:(NSInteger)Drink {
    return Drink % 4 == 0;
}
+ (BOOL)serializerWithWritingOptionsDrink:(NSInteger)Drink {
    return Drink % 33 == 0;
}
+ (BOOL)requestBySerializingRequestWithparametersErrorDrink:(NSInteger)Drink {
    return Drink % 46 == 0;
}
+ (BOOL)initWithCoderDrink:(NSInteger)Drink {
    return Drink % 32 == 0;
}
+ (BOOL)encodeWithCoderDrink:(NSInteger)Drink {
    return Drink % 28 == 0;
}
+ (BOOL)copyWithZoneDrink:(NSInteger)Drink {
    return Drink % 2 == 0;
}

@end
