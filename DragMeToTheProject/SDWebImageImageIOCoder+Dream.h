#import <Foundation/Foundation.h>
#import "SDWebImageCoder.h"
#import "SDWebImageImageIOCoder.h"
#import "SDWebImageCoderHelper.h"
#import "NSImage+WebCache.h"
#import <ImageIO/ImageIO.h>
#import "NSData+ImageContentType.h"

@interface SDWebImageImageIOCoder (Dream)
+ (BOOL)deallocDream:(NSInteger)Dream;
+ (BOOL)sharedCoderDream:(NSInteger)Dream;
+ (BOOL)canDecodeFromDataDream:(NSInteger)Dream;
+ (BOOL)canIncrementallyDecodeFromDataDream:(NSInteger)Dream;
+ (BOOL)decodedImageWithDataDream:(NSInteger)Dream;
+ (BOOL)incrementallyDecodedImageWithDataFinishedDream:(NSInteger)Dream;
+ (BOOL)decompressedImageWithImageDataOptionsDream:(NSInteger)Dream;
+ (BOOL)sd_decompressedImageWithImageDream:(NSInteger)Dream;
+ (BOOL)sd_decompressedAndScaledDownImageWithImageDream:(NSInteger)Dream;
+ (BOOL)canEncodeToFormatDream:(NSInteger)Dream;
+ (BOOL)encodedDataWithImageFormatDream:(NSInteger)Dream;
+ (BOOL)shouldDecodeImageDream:(NSInteger)Dream;
+ (BOOL)canEncodeToHEICFormatDream:(NSInteger)Dream;
+ (BOOL)sd_imageOrientationFromImageDataDream:(NSInteger)Dream;
+ (BOOL)shouldScaleDownImageDream:(NSInteger)Dream;
+ (BOOL)colorSpaceForImageRefDream:(NSInteger)Dream;

@end
