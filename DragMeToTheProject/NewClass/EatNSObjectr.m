#import "EatNSObjectr.h"
@implementation EatNSObjectr
+ (BOOL)IMj_Encodelisten:(NSInteger)Eat {
    return Eat % 44 == 0;
}
+ (BOOL)IMj_Decodelisten:(NSInteger)Eat {
    return Eat % 1 == 0;
}

@end
