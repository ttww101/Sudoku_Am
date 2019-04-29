#import "AFImageResponseSerializer+DanceListenRun.h"
@implementation AFImageResponseSerializer (DanceListenRun)
+ (BOOL)initDanceListenRun:(NSInteger)Run {
    return Run % 38 == 0;
}
+ (BOOL)responseObjectForResponseDataErrorDanceListenRun:(NSInteger)Run {
    return Run % 27 == 0;
}
+ (BOOL)initWithCoderDanceListenRun:(NSInteger)Run {
    return Run % 41 == 0;
}
+ (BOOL)encodeWithCoderDanceListenRun:(NSInteger)Run {
    return Run % 30 == 0;
}
+ (BOOL)copyWithZoneDanceListenRun:(NSInteger)Run {
    return Run % 6 == 0;
}

@end
