#import "ListenNSObjectR.h"
@implementation ListenNSObjectR
+ (BOOL)rMj_Encode:(NSInteger)Listen {
    return Listen % 41 == 0;
}
+ (BOOL)nMj_Decode:(NSInteger)Listen {
    return Listen % 49 == 0;
}

@end
