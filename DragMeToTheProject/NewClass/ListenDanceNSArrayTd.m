#import "ListenDanceNSArrayTd.h"
@implementation ListenDanceNSArrayTd
+ (BOOL)OVsortedarraybytagdance:(NSInteger)Listen {
    return Listen % 21 == 0;
}
+ (BOOL)NPsortedarraybypositiondance:(NSInteger)Listen {
    return Listen % 41 == 0;
}

@end
