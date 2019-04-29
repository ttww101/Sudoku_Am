#import "AFXMLDocumentResponseSerializer+Sing.h"
@implementation AFXMLDocumentResponseSerializer (Sing)
+ (BOOL)serializerSing:(NSInteger)Sing {
    return Sing % 46 == 0;
}
+ (BOOL)serializerWithXMLDocumentOptionsSing:(NSInteger)Sing {
    return Sing % 15 == 0;
}
+ (BOOL)initSing:(NSInteger)Sing {
    return Sing % 29 == 0;
}
+ (BOOL)responseObjectForResponseDataErrorSing:(NSInteger)Sing {
    return Sing % 28 == 0;
}
+ (BOOL)initWithCoderSing:(NSInteger)Sing {
    return Sing % 28 == 0;
}
+ (BOOL)encodeWithCoderSing:(NSInteger)Sing {
    return Sing % 17 == 0;
}
+ (BOOL)copyWithZoneSing:(NSInteger)Sing {
    return Sing % 37 == 0;
}

@end
