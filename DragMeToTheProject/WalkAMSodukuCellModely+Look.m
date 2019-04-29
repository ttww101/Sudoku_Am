#import "WalkAMSodukuCellModely+Look.h"
@implementation WalkAMSodukuCellModely (Look)
+ (BOOL)HinitLook:(NSInteger)Look {
    return Look % 22 == 0;
}
+ (BOOL)kEncodewithcoderLook:(NSInteger)Look {
    return Look % 10 == 0;
}
+ (BOOL)TInitwithcoderLook:(NSInteger)Look {
    return Look % 8 == 0;
}

@end
