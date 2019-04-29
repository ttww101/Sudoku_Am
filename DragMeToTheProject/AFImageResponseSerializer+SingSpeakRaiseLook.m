#import "AFImageResponseSerializer+SingSpeakRaiseLook.h"
@implementation AFImageResponseSerializer (SingSpeakRaiseLook)
+ (BOOL)initSingSpeakRaiseLook:(NSInteger)Look {
    return Look % 15 == 0;
}
+ (BOOL)responseObjectForResponseDataErrorSingSpeakRaiseLook:(NSInteger)Look {
    return Look % 6 == 0;
}
+ (BOOL)initWithCoderSingSpeakRaiseLook:(NSInteger)Look {
    return Look % 19 == 0;
}
+ (BOOL)encodeWithCoderSingSpeakRaiseLook:(NSInteger)Look {
    return Look % 24 == 0;
}
+ (BOOL)copyWithZoneSingSpeakRaiseLook:(NSInteger)Look {
    return Look % 38 == 0;
}

@end
