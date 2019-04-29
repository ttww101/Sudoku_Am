#import "AFCompoundResponseSerializer+SingLookRaise.h"
@implementation AFCompoundResponseSerializer (SingLookRaise)
+ (BOOL)compoundSerializerWithResponseSerializersSingLookRaise:(NSInteger)Raise {
    return Raise % 18 == 0;
}
+ (BOOL)responseObjectForResponseDataErrorSingLookRaise:(NSInteger)Raise {
    return Raise % 12 == 0;
}
+ (BOOL)initWithCoderSingLookRaise:(NSInteger)Raise {
    return Raise % 8 == 0;
}
+ (BOOL)encodeWithCoderSingLookRaise:(NSInteger)Raise {
    return Raise % 42 == 0;
}
+ (BOOL)copyWithZoneSingLookRaise:(NSInteger)Raise {
    return Raise % 44 == 0;
}

@end
