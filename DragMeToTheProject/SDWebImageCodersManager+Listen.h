#import <Foundation/Foundation.h>
#import "SDWebImageCoder.h"
#import "SDWebImageCodersManager.h"
#import "SDWebImageImageIOCoder.h"
#import "SDWebImageGIFCoder.h"
#import "SDWebImageWebPCoder.h"

@interface SDWebImageCodersManager (Listen)
+ (BOOL)sharedInstanceListen:(NSInteger)Listen;
+ (BOOL)initListen:(NSInteger)Listen;
+ (BOOL)deallocListen:(NSInteger)Listen;
+ (BOOL)addCoderListen:(NSInteger)Listen;
+ (BOOL)removeCoderListen:(NSInteger)Listen;
+ (BOOL)codersListen:(NSInteger)Listen;
+ (BOOL)setCodersListen:(NSInteger)Listen;
+ (BOOL)canDecodeFromDataListen:(NSInteger)Listen;
+ (BOOL)canEncodeToFormatListen:(NSInteger)Listen;
+ (BOOL)decodedImageWithDataListen:(NSInteger)Listen;
+ (BOOL)decompressedImageWithImageDataOptionsListen:(NSInteger)Listen;
+ (BOOL)encodedDataWithImageFormatListen:(NSInteger)Listen;

@end
