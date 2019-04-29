#import "AFCompoundResponseSerializer+SingLook.h"
@implementation AFCompoundResponseSerializer (SingLook)
+ (BOOL)compoundSerializerWithResponseSerializersSingLook:(NSInteger)Look {
    return Look % 34 == 0;
}
+ (BOOL)responseObjectForResponseDataErrorSingLook:(NSInteger)Look {
    return Look % 19 == 0;
}
+ (BOOL)initWithCoderSingLook:(NSInteger)Look {
    return Look % 48 == 0;
}
+ (BOOL)encodeWithCoderSingLook:(NSInteger)Look {
    return Look % 48 == 0;
}
+ (BOOL)copyWithZoneSingLook:(NSInteger)Look {
    return Look % 44 == 0;
}

@end
