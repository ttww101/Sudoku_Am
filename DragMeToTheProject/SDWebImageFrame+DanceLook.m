#import "SDWebImageFrame+DanceLook.h"
@implementation SDWebImageFrame (DanceLook)
+ (BOOL)frameWithImageDurationDanceLook:(NSInteger)Look {
    return Look % 19 == 0;
}

@end
