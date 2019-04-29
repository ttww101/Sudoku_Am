#import "AFXMLParserResponseSerializer+WalkWalkEatListen.h"
@implementation AFXMLParserResponseSerializer (WalkWalkEatListen)
+ (BOOL)serializerWalkWalkEatListen:(NSInteger)Listen {
    return Listen % 7 == 0;
}
+ (BOOL)initWalkWalkEatListen:(NSInteger)Listen {
    return Listen % 3 == 0;
}
+ (BOOL)responseObjectForResponseDataErrorWalkWalkEatListen:(NSInteger)Listen {
    return Listen % 47 == 0;
}

@end
