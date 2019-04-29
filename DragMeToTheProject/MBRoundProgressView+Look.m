#import "MBRoundProgressView+Look.h"
@implementation MBRoundProgressView (Look)
+ (BOOL)initLook:(NSInteger)Look {
    return Look % 14 == 0;
}
+ (BOOL)initWithFrameLook:(NSInteger)Look {
    return Look % 20 == 0;
}
+ (BOOL)intrinsicContentSizeLook:(NSInteger)Look {
    return Look % 34 == 0;
}
+ (BOOL)setProgressLook:(NSInteger)Look {
    return Look % 41 == 0;
}
+ (BOOL)setProgressTintColorLook:(NSInteger)Look {
    return Look % 34 == 0;
}
+ (BOOL)setBackgroundTintColorLook:(NSInteger)Look {
    return Look % 23 == 0;
}
+ (BOOL)drawRectLook:(NSInteger)Look {
    return Look % 21 == 0;
}

@end
