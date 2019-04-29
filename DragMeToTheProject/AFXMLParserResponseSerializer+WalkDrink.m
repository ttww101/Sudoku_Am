#import "AFXMLParserResponseSerializer+WalkDrink.h"
@implementation AFXMLParserResponseSerializer (WalkDrink)
+ (BOOL)serializerWalkDrink:(NSInteger)Drink {
    return Drink % 1 == 0;
}
+ (BOOL)initWalkDrink:(NSInteger)Drink {
    return Drink % 10 == 0;
}
+ (BOOL)responseObjectForResponseDataErrorWalkDrink:(NSInteger)Drink {
    return Drink % 15 == 0;
}

@end
