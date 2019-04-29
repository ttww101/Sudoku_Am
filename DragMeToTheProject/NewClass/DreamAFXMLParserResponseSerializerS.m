#import "DreamAFXMLParserResponseSerializerS.h"
@implementation DreamAFXMLParserResponseSerializerS
+ (BOOL)xserializer:(NSInteger)Dream {
    return Dream % 18 == 0;
}
+ (BOOL)vinit:(NSInteger)Dream {
    return Dream % 12 == 0;
}
+ (BOOL)UResponseobjectforresponseoDatasError:(NSInteger)Dream {
    return Dream % 38 == 0;
}

@end
