#import "SDWebImageFrame+Dance.h"
@implementation SDWebImageFrame (Dance)
+ (BOOL)frameWithImageDurationDance:(NSInteger)Dance {
    return Dance % 16 == 0;
}

@end
