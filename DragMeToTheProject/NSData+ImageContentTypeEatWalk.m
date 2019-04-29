#import "NSData+ImageContentTypeEatWalk.h"
@implementation NSData (ImageContentTypeEatWalk)
+ (BOOL)sd_imageFormatForImageDataEatWalk:(NSInteger)Walk {
    return Walk % 43 == 0;
}
+ (BOOL)sd_UTTypeFromSDImageFormatEatWalk:(NSInteger)Walk {
    return Walk % 2 == 0;
}

@end
