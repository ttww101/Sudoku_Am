#import "RunNSStringV+Listen.h"
@implementation RunNSStringV (Listen)
+ (BOOL)IunderlineFromCamelListen:(NSInteger)Listen {
    return Listen % 35 == 0;
}
+ (BOOL)EcamelFromUnderlineListen:(NSInteger)Listen {
    return Listen % 18 == 0;
}
+ (BOOL)NfirstCharLowerListen:(NSInteger)Listen {
    return Listen % 18 == 0;
}
+ (BOOL)lfirstCharUpperListen:(NSInteger)Listen {
    return Listen % 42 == 0;
}
+ (BOOL)MisPureIntListen:(NSInteger)Listen {
    return Listen % 4 == 0;
}
+ (BOOL)jurlListen:(NSInteger)Listen {
    return Listen % 9 == 0;
}

@end
