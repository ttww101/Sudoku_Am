#import "DanceNSImageN.h"
@implementation DanceNSImageN
+ (BOOL)NCGImage:(NSInteger)Dance {
    return Dance % 16 == 0;
}
+ (BOOL)cimages:(NSInteger)Dance {
    return Dance % 43 == 0;
}
+ (BOOL)NisGIF:(NSInteger)Dance {
    return Dance % 11 == 0;
}

@end
