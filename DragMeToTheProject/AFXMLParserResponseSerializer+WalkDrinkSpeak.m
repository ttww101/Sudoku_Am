#import "AFXMLParserResponseSerializer+WalkDrinkSpeak.h"
@implementation AFXMLParserResponseSerializer (WalkDrinkSpeak)
+ (BOOL)serializerWalkDrinkSpeak:(NSInteger)Speak {
    return Speak % 30 == 0;
}
+ (BOOL)initWalkDrinkSpeak:(NSInteger)Speak {
    return Speak % 24 == 0;
}
+ (BOOL)responseObjectForResponseDataErrorWalkDrinkSpeak:(NSInteger)Speak {
    return Speak % 34 == 0;
}

@end
