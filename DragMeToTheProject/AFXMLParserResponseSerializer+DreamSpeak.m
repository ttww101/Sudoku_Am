#import "AFXMLParserResponseSerializer+DreamSpeak.h"
@implementation AFXMLParserResponseSerializer (DreamSpeak)
+ (BOOL)serializerDreamSpeak:(NSInteger)Speak {
    return Speak % 15 == 0;
}
+ (BOOL)initDreamSpeak:(NSInteger)Speak {
    return Speak % 21 == 0;
}
+ (BOOL)responseObjectForResponseDataErrorDreamSpeak:(NSInteger)Speak {
    return Speak % 43 == 0;
}

@end
