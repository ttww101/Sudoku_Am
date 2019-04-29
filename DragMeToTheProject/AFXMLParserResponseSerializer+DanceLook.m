#import "AFXMLParserResponseSerializer+DanceLook.h"
@implementation AFXMLParserResponseSerializer (DanceLook)
+ (BOOL)serializerDanceLook:(NSInteger)Look {
    return Look % 28 == 0;
}
+ (BOOL)initDanceLook:(NSInteger)Look {
    return Look % 32 == 0;
}
+ (BOOL)responseObjectForResponseDataErrorDanceLook:(NSInteger)Look {
    return Look % 16 == 0;
}

@end
