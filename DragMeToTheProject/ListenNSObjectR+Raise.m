#import "ListenNSObjectR+Raise.h"
@implementation ListenNSObjectR (Raise)
+ (BOOL)rMj_EncodeRaise:(NSInteger)Raise {
    return Raise % 37 == 0;
}
+ (BOOL)nMj_DecodeRaise:(NSInteger)Raise {
    return Raise % 43 == 0;
}

@end
