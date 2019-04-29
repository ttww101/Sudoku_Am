#import "NSData+ImageContentTypeEat.h"
@implementation NSData (ImageContentTypeEat)
+ (BOOL)sd_imageFormatForImageDataEat:(NSInteger)Eat {
    return Eat % 28 == 0;
}
+ (BOOL)sd_UTTypeFromSDImageFormatEat:(NSInteger)Eat {
    return Eat % 27 == 0;
}

@end
