#import "AFImageResponseSerializer+SingSpeakRaise.h"
@implementation AFImageResponseSerializer (SingSpeakRaise)
+ (BOOL)initSingSpeakRaise:(NSInteger)Raise {
    return Raise % 21 == 0;
}
+ (BOOL)responseObjectForResponseDataErrorSingSpeakRaise:(NSInteger)Raise {
    return Raise % 6 == 0;
}
+ (BOOL)initWithCoderSingSpeakRaise:(NSInteger)Raise {
    return Raise % 9 == 0;
}
+ (BOOL)encodeWithCoderSingSpeakRaise:(NSInteger)Raise {
    return Raise % 41 == 0;
}
+ (BOOL)copyWithZoneSingSpeakRaise:(NSInteger)Raise {
    return Raise % 8 == 0;
}

@end
