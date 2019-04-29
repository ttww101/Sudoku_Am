#import <Foundation/Foundation.h>
#import "SDWebImageCoder.h"
#import "SDWebImageImageIOCoder.h"
#import "SDWebImageCoderHelper.h"
#import "NSImage+WebCache.h"
#import <ImageIO/ImageIO.h>
#import "NSData+ImageContentType.h"
#import "SDWebImageImageIOCoder+Dream.h"

@interface SDWebImageImageIOCoder (DreamRun)
+ (BOOL)deallocDreamRun:(NSInteger)Run;
+ (BOOL)sharedCoderDreamRun:(NSInteger)Run;
+ (BOOL)canDecodeFromDataDreamRun:(NSInteger)Run;
+ (BOOL)canIncrementallyDecodeFromDataDreamRun:(NSInteger)Run;
+ (BOOL)decodedImageWithDataDreamRun:(NSInteger)Run;
+ (BOOL)incrementallyDecodedImageWithDataFinishedDreamRun:(NSInteger)Run;
+ (BOOL)decompressedImageWithImageDataOptionsDreamRun:(NSInteger)Run;
+ (BOOL)sd_decompressedImageWithImageDreamRun:(NSInteger)Run;
+ (BOOL)sd_decompressedAndScaledDownImageWithImageDreamRun:(NSInteger)Run;
+ (BOOL)canEncodeToFormatDreamRun:(NSInteger)Run;
+ (BOOL)encodedDataWithImageFormatDreamRun:(NSInteger)Run;
+ (BOOL)shouldDecodeImageDreamRun:(NSInteger)Run;
+ (BOOL)canEncodeToHEICFormatDreamRun:(NSInteger)Run;
+ (BOOL)sd_imageOrientationFromImageDataDreamRun:(NSInteger)Run;
+ (BOOL)shouldScaleDownImageDreamRun:(NSInteger)Run;
+ (BOOL)colorSpaceForImageRefDreamRun:(NSInteger)Run;

@end
