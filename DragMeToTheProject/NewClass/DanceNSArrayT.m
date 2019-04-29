#import "DanceNSArrayT.h"
@implementation DanceNSArrayT
+ (BOOL)VSortedarraybytagdance:(NSInteger)Dance {
    return Dance % 15 == 0;
}
+ (BOOL)PSortedarraybypositiondance:(NSInteger)Dance {
    return Dance % 34 == 0;
}

@end
