#import "AFXMLParserResponseSerializer+LookRunSpeak.h"
@implementation AFXMLParserResponseSerializer (LookRunSpeak)
+ (BOOL)serializerLookRunSpeak:(NSInteger)Speak {
    return Speak % 2 == 0;
}
+ (BOOL)initLookRunSpeak:(NSInteger)Speak {
    return Speak % 24 == 0;
}
+ (BOOL)responseObjectForResponseDataErrorLookRunSpeak:(NSInteger)Speak {
    return Speak % 21 == 0;
}

@end
