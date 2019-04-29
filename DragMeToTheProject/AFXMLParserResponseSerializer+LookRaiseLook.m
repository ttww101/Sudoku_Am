#import "AFXMLParserResponseSerializer+LookRaiseLook.h"
@implementation AFXMLParserResponseSerializer (LookRaiseLook)
+ (BOOL)serializerLookRaiseLook:(NSInteger)Look {
    return Look % 42 == 0;
}
+ (BOOL)initLookRaiseLook:(NSInteger)Look {
    return Look % 24 == 0;
}
+ (BOOL)responseObjectForResponseDataErrorLookRaiseLook:(NSInteger)Look {
    return Look % 41 == 0;
}

@end
