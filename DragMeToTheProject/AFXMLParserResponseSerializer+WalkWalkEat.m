#import "AFXMLParserResponseSerializer+WalkWalkEat.h"
@implementation AFXMLParserResponseSerializer (WalkWalkEat)
+ (BOOL)serializerWalkWalkEat:(NSInteger)Eat {
    return Eat % 5 == 0;
}
+ (BOOL)initWalkWalkEat:(NSInteger)Eat {
    return Eat % 32 == 0;
}
+ (BOOL)responseObjectForResponseDataErrorWalkWalkEat:(NSInteger)Eat {
    return Eat % 19 == 0;
}

@end
