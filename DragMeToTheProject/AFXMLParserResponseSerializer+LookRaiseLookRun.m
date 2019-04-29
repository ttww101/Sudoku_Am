#import "AFXMLParserResponseSerializer+LookRaiseLookRun.h"
@implementation AFXMLParserResponseSerializer (LookRaiseLookRun)
+ (BOOL)serializerLookRaiseLookRun:(NSInteger)Run {
    return Run % 5 == 0;
}
+ (BOOL)initLookRaiseLookRun:(NSInteger)Run {
    return Run % 45 == 0;
}
+ (BOOL)responseObjectForResponseDataErrorLookRaiseLookRun:(NSInteger)Run {
    return Run % 31 == 0;
}

@end
