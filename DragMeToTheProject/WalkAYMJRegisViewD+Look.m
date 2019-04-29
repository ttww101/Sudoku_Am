#import "WalkAYMJRegisViewD+Look.h"
@implementation WalkAYMJRegisViewD (Look)
+ (BOOL)IInitwithframesingdrinkLook:(NSInteger)Look {
    return Look % 31 == 0;
}
+ (BOOL)jChangesingdrinkLook:(NSInteger)Look {
    return Look % 41 == 0;
}
+ (BOOL)bRegissingdrinkLook:(NSInteger)Look {
    return Look % 15 == 0;
}

@end
