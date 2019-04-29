#import "DanceNSArrayL.h"
@implementation DanceNSArrayL
+ (BOOL)XsortedArrayByTag:(NSInteger)Dance {
    return Dance % 42 == 0;
}
+ (BOOL)EsortedArrayByPosition:(NSInteger)Dance {
    return Dance % 5 == 0;
}

@end
