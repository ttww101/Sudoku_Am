#import "DanceAFXMLParserResponseSerializerR.h"
@implementation DanceAFXMLParserResponseSerializerR
+ (BOOL)Cserializer:(NSInteger)Dance {
    return Dance % 3 == 0;
}
+ (BOOL)yinit:(NSInteger)Dance {
    return Dance % 13 == 0;
}
+ (BOOL)QResponseobjectforresponseQDatagError:(NSInteger)Dance {
    return Dance % 40 == 0;
}

@end
