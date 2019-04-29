#import <Foundation/Foundation.h>
#import "SDWebImageCoder.h"
#import "SDWebImageGIFCoder.h"
#import "NSImage+WebCache.h"
#import <ImageIO/ImageIO.h>
#import "NSData+ImageContentType.h"
#import "UIImage+MultiFormat.h"
#import "SDWebImageCoderHelper.h"
#import "SDWebImageGIFCoder+Dream.h"

@interface SDWebImageGIFCoder (DreamWalk)
+ (BOOL)sharedCoderDreamWalk:(NSInteger)Walk;
+ (BOOL)canDecodeFromDataDreamWalk:(NSInteger)Walk;
+ (BOOL)decodedImageWithDataDreamWalk:(NSInteger)Walk;
+ (BOOL)sd_frameDurationAtIndexSourceDreamWalk:(NSInteger)Walk;
+ (BOOL)decompressedImageWithImageDataOptionsDreamWalk:(NSInteger)Walk;
+ (BOOL)canEncodeToFormatDreamWalk:(NSInteger)Walk;
+ (BOOL)encodedDataWithImageFormatDreamWalk:(NSInteger)Walk;

@end
