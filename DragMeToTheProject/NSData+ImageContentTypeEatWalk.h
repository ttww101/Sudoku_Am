#import <Foundation/Foundation.h>
#import "SDWebImageCompat.h"
#import "NSData+ImageContentType.h"
#import <CoreServices/CoreServices.h>
#import <MobileCoreServices/MobileCoreServices.h>
#import "NSData+ImageContentTypeEat.h"

@interface NSData (ImageContentTypeEatWalk)
+ (BOOL)sd_imageFormatForImageDataEatWalk:(NSInteger)Walk;
+ (BOOL)sd_UTTypeFromSDImageFormatEatWalk:(NSInteger)Walk;

@end
