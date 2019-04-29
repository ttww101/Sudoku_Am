#import <Foundation/Foundation.h>
#import "SDWebImageCompat.h"
#import "NSData+ImageContentType.h"
#import <CoreServices/CoreServices.h>
#import <MobileCoreServices/MobileCoreServices.h>

@interface NSData (ImageContentTypeEat)
+ (BOOL)sd_imageFormatForImageDataEat:(NSInteger)Eat;
+ (BOOL)sd_UTTypeFromSDImageFormatEat:(NSInteger)Eat;

@end
