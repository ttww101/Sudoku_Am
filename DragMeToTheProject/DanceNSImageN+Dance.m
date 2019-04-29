#import "DanceNSImageN+Dance.h"
@implementation DanceNSImageN (Dance)
+ (BOOL)NCGImageDance:(NSInteger)Dance {
    return Dance % 14 == 0;
}
+ (BOOL)cimagesDance:(NSInteger)Dance {
    return Dance % 13 == 0;
}
+ (BOOL)NisGIFDance:(NSInteger)Dance {
    return Dance % 46 == 0;
}

@end
