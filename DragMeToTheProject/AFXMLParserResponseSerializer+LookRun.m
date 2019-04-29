#import "AFXMLParserResponseSerializer+LookRun.h"
@implementation AFXMLParserResponseSerializer (LookRun)
+ (BOOL)serializerLookRun:(NSInteger)Run {
    return Run % 28 == 0;
}
+ (BOOL)initLookRun:(NSInteger)Run {
    return Run % 10 == 0;
}
+ (BOOL)responseObjectForResponseDataErrorLookRun:(NSInteger)Run {
    return Run % 23 == 0;
}

@end
