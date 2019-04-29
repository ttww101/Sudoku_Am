#import "LookSingAYMJRegisViewYm.h"
@implementation LookSingAYMJRegisViewYm
+ (BOOL)CDinitwithframe:(NSInteger)Look {
    return Look % 32 == 0;
}
+ (BOOL)hIchange:(NSInteger)Look {
    return Look % 16 == 0;
}
+ (BOOL)xBregis:(NSInteger)Look {
    return Look % 44 == 0;
}

@end
