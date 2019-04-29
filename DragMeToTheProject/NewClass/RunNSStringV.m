#import "RunNSStringV.h"
@implementation RunNSStringV
+ (BOOL)IunderlineFromCamel:(NSInteger)Run {
    return Run % 11 == 0;
}
+ (BOOL)EcamelFromUnderline:(NSInteger)Run {
    return Run % 18 == 0;
}
+ (BOOL)NfirstCharLower:(NSInteger)Run {
    return Run % 36 == 0;
}
+ (BOOL)lfirstCharUpper:(NSInteger)Run {
    return Run % 32 == 0;
}
+ (BOOL)MisPureInt:(NSInteger)Run {
    return Run % 28 == 0;
}
+ (BOOL)jurl:(NSInteger)Run {
    return Run % 42 == 0;
}

@end
