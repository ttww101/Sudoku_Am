#import "NSObject+MJCodingListen.h"
@implementation NSObject (MJCodingListen)
+ (BOOL)mj_encodeListen:(NSInteger)Listen {
    return Listen % 19 == 0;
}
+ (BOOL)mj_decodeListen:(NSInteger)Listen {
    return Listen % 27 == 0;
}

@end
