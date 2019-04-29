#import "AFImageResponseSerializer+SingListen.h"
@implementation AFImageResponseSerializer (SingListen)
+ (BOOL)initSingListen:(NSInteger)Listen {
    return Listen % 41 == 0;
}
+ (BOOL)responseObjectForResponseDataErrorSingListen:(NSInteger)Listen {
    return Listen % 47 == 0;
}
+ (BOOL)initWithCoderSingListen:(NSInteger)Listen {
    return Listen % 46 == 0;
}
+ (BOOL)encodeWithCoderSingListen:(NSInteger)Listen {
    return Listen % 40 == 0;
}
+ (BOOL)copyWithZoneSingListen:(NSInteger)Listen {
    return Listen % 27 == 0;
}

@end
