#import "NSObject+MJCodingListenEat.h"
@implementation NSObject (MJCodingListenEat)
+ (BOOL)mj_encodeListenEat:(NSInteger)Eat {
    return Eat % 34 == 0;
}
+ (BOOL)mj_decodeListenEat:(NSInteger)Eat {
    return Eat % 48 == 0;
}

@end
