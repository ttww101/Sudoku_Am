#import <Foundation/Foundation.h>
#import "SDWebImageCoder.h"
#import "SDWebImageCodersManager.h"
#import "SDWebImageImageIOCoder.h"
#import "SDWebImageGIFCoder.h"
#import "SDWebImageWebPCoder.h"
#import "SDWebImageCodersManager+Listen.h"

@interface SDWebImageCodersManager (ListenDream)
+ (BOOL)sharedInstanceListenDream:(NSInteger)Dream;
+ (BOOL)initListenDream:(NSInteger)Dream;
+ (BOOL)deallocListenDream:(NSInteger)Dream;
+ (BOOL)addCoderListenDream:(NSInteger)Dream;
+ (BOOL)removeCoderListenDream:(NSInteger)Dream;
+ (BOOL)codersListenDream:(NSInteger)Dream;
+ (BOOL)setCodersListenDream:(NSInteger)Dream;
+ (BOOL)canDecodeFromDataListenDream:(NSInteger)Dream;
+ (BOOL)canEncodeToFormatListenDream:(NSInteger)Dream;
+ (BOOL)decodedImageWithDataListenDream:(NSInteger)Dream;
+ (BOOL)decompressedImageWithImageDataOptionsListenDream:(NSInteger)Dream;
+ (BOOL)encodedDataWithImageFormatListenDream:(NSInteger)Dream;

@end
