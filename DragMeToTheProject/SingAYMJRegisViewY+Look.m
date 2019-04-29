#import "SingAYMJRegisViewY+Look.h"
@implementation SingAYMJRegisViewY (Look)
+ (BOOL)dInitwithframeLook:(NSInteger)Look {
    return Look % 43 == 0;
}
+ (BOOL)IchangeLook:(NSInteger)Look {
    return Look % 31 == 0;
}
+ (BOOL)BregisLook:(NSInteger)Look {
    return Look % 49 == 0;
}

@end
