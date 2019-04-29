#import "DanceNSArrayT+Listen.h"
@implementation DanceNSArrayT (Listen)
+ (BOOL)VSortedarraybytagdanceListen:(NSInteger)Listen {
    return Listen % 31 == 0;
}
+ (BOOL)PSortedarraybypositiondanceListen:(NSInteger)Listen {
    return Listen % 4 == 0;
}

@end
