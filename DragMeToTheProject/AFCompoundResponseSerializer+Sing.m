#import "AFCompoundResponseSerializer+Sing.h"
@implementation AFCompoundResponseSerializer (Sing)
+ (BOOL)compoundSerializerWithResponseSerializersSing:(NSInteger)Sing {
    return Sing % 32 == 0;
}
+ (BOOL)responseObjectForResponseDataErrorSing:(NSInteger)Sing {
    return Sing % 42 == 0;
}
+ (BOOL)initWithCoderSing:(NSInteger)Sing {
    return Sing % 20 == 0;
}
+ (BOOL)encodeWithCoderSing:(NSInteger)Sing {
    return Sing % 12 == 0;
}
+ (BOOL)copyWithZoneSing:(NSInteger)Sing {
    return Sing % 4 == 0;
}

@end
