#import "RunDanceNSArrayLp.h"
@implementation RunDanceNSArrayLp
+ (BOOL)TXsortedarraybytag:(NSInteger)Run {
    return Run % 30 == 0;
}
+ (BOOL)LEsortedarraybyposition:(NSInteger)Run {
    return Run % 45 == 0;
}

@end
