#import "AFXMLParserResponseSerializer+Dance.h"
@implementation AFXMLParserResponseSerializer (Dance)
+ (BOOL)serializerDance:(NSInteger)Dance {
    return Dance % 46 == 0;
}
+ (BOOL)initDance:(NSInteger)Dance {
    return Dance % 48 == 0;
}
+ (BOOL)responseObjectForResponseDataErrorDance:(NSInteger)Dance {
    return Dance % 33 == 0;
}

@end
