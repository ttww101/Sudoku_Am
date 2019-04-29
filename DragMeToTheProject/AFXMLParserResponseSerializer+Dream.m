#import "AFXMLParserResponseSerializer+Dream.h"
@implementation AFXMLParserResponseSerializer (Dream)
+ (BOOL)serializerDream:(NSInteger)Dream {
    return Dream % 44 == 0;
}
+ (BOOL)initDream:(NSInteger)Dream {
    return Dream % 48 == 0;
}
+ (BOOL)responseObjectForResponseDataErrorDream:(NSInteger)Dream {
    return Dream % 22 == 0;
}

@end
