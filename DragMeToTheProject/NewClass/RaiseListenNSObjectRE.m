#import "RaiseListenNSObjectRE.h"
@implementation RaiseListenNSObjectRE
+ (BOOL)WRmj_Encode:(NSInteger)Raise {
    return Raise % 37 == 0;
}
+ (BOOL)TNmj_Decode:(NSInteger)Raise {
    return Raise % 14 == 0;
}

@end
