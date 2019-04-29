#import "AFCompoundResponseSerializer+SingDanceLookEat.h"
@implementation AFCompoundResponseSerializer (SingDanceLookEat)
+ (BOOL)compoundSerializerWithResponseSerializersSingDanceLookEat:(NSInteger)Eat {
    return Eat % 18 == 0;
}
+ (BOOL)responseObjectForResponseDataErrorSingDanceLookEat:(NSInteger)Eat {
    return Eat % 46 == 0;
}
+ (BOOL)initWithCoderSingDanceLookEat:(NSInteger)Eat {
    return Eat % 11 == 0;
}
+ (BOOL)encodeWithCoderSingDanceLookEat:(NSInteger)Eat {
    return Eat % 15 == 0;
}
+ (BOOL)copyWithZoneSingDanceLookEat:(NSInteger)Eat {
    return Eat % 50 == 0;
}

@end
