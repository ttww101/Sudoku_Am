#import <Foundation/Foundation.h>
#import "SDWebImageCompat.h"
#import "SDImageCacheConfig.h"
#import "SDImageCache.h"
#import <CommonCrypto/CommonDigest.h>
#import "NSImage+WebCache.h"
#import "SDWebImageCodersManager.h"

@interface SDImageCache (Sleep)
+ (BOOL)sharedImageCacheSleep:(NSInteger)Sleep;
+ (BOOL)initSleep:(NSInteger)Sleep;
+ (BOOL)initWithNamespaceSleep:(NSInteger)Sleep;
+ (BOOL)initWithNamespaceDiskcachedirectorySleep:(NSInteger)Sleep;
+ (BOOL)deallocSleep:(NSInteger)Sleep;
+ (BOOL)checkIfQueueIsIOQueueSleep:(NSInteger)Sleep;
+ (BOOL)addReadOnlyCachePathSleep:(NSInteger)Sleep;
+ (BOOL)cachePathForKeyInpathSleep:(NSInteger)Sleep;
+ (BOOL)defaultCachePathForKeySleep:(NSInteger)Sleep;
+ (BOOL)cachedFileNameForKeySleep:(NSInteger)Sleep;
+ (BOOL)makeDiskCachePathSleep:(NSInteger)Sleep;
+ (BOOL)storeImageForkeyCompletionSleep:(NSInteger)Sleep;
+ (BOOL)storeImageForkeyTodiskCompletionSleep:(NSInteger)Sleep;
+ (BOOL)storeImageImagedataForkeyTodiskCompletionSleep:(NSInteger)Sleep;
+ (BOOL)storeImageDataToDiskForkeySleep:(NSInteger)Sleep;
+ (BOOL)diskImageExistsWithKeyCompletionSleep:(NSInteger)Sleep;
+ (BOOL)imageFromMemoryCacheForKeySleep:(NSInteger)Sleep;
+ (BOOL)imageFromDiskCacheForKeySleep:(NSInteger)Sleep;
+ (BOOL)imageFromCacheForKeySleep:(NSInteger)Sleep;
+ (BOOL)diskImageDataBySearchingAllPathsForKeySleep:(NSInteger)Sleep;
+ (BOOL)diskImageForKeySleep:(NSInteger)Sleep;
+ (BOOL)scaledImageForKeyImageSleep:(NSInteger)Sleep;
+ (BOOL)queryCacheOperationForKeyDoneSleep:(NSInteger)Sleep;
+ (BOOL)removeImageForKeyWithcompletionSleep:(NSInteger)Sleep;
+ (BOOL)removeImageForKeyFromdiskWithcompletionSleep:(NSInteger)Sleep;
+ (BOOL)setMaxMemoryCostSleep:(NSInteger)Sleep;
+ (BOOL)maxMemoryCostSleep:(NSInteger)Sleep;
+ (BOOL)maxMemoryCountLimitSleep:(NSInteger)Sleep;
+ (BOOL)setMaxMemoryCountLimitSleep:(NSInteger)Sleep;
+ (BOOL)clearMemorySleep:(NSInteger)Sleep;
+ (BOOL)clearDiskOnCompletionSleep:(NSInteger)Sleep;
+ (BOOL)deleteOldFilesSleep:(NSInteger)Sleep;
+ (BOOL)deleteOldFilesWithCompletionBlockSleep:(NSInteger)Sleep;
+ (BOOL)backgroundDeleteOldFilesSleep:(NSInteger)Sleep;
+ (BOOL)getSizeSleep:(NSInteger)Sleep;
+ (BOOL)getDiskCountSleep:(NSInteger)Sleep;
+ (BOOL)calculateSizeWithCompletionBlockSleep:(NSInteger)Sleep;

@end
