#import "DrinkEatAMBaseModelPL.h"
@implementation DrinkEatAMBaseModelPL
+ (BOOL)EVsetvalueforundefinedkeyeat:(NSInteger)Drink {
    return Drink % 5 == 0;
}

@end
