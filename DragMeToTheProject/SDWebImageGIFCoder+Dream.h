#import <Foundation/Foundation.h>
#import "SDWebImageCoder.h"
#import "SDWebImageGIFCoder.h"
#import "NSImage+WebCache.h"
#import <ImageIO/ImageIO.h>
#import "NSData+ImageContentType.h"
#import "UIImage+MultiFormat.h"
#import "SDWebImageCoderHelper.h"

@interface SDWebImageGIFCoder (Dream)
+ (BOOL)sharedCoderDream:(NSInteger)Dream;
+ (BOOL)canDecodeFromDataDream:(NSInteger)Dream;
+ (BOOL)decodedImageWithDataDream:(NSInteger)Dream;
+ (BOOL)sd_frameDurationAtIndexSourceDream:(NSInteger)Dream;
+ (BOOL)decompressedImageWithImageDataOptionsDream:(NSInteger)Dream;
+ (BOOL)canEncodeToFormatDream:(NSInteger)Dream;
+ (BOOL)encodedDataWithImageFormatDream:(NSInteger)Dream;

@end
