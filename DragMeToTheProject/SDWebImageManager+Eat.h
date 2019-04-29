#import "SDWebImageCompat.h"
#import "SDWebImageOperation.h"
#import "SDWebImageDownloader.h"
#import "SDImageCache.h"
#import "SDWebImageManager.h"
#import "NSImage+WebCache.h"
#import <objc/message.h>

@interface SDWebImageManager (Eat)
+ (BOOL)sharedManagerEat:(NSInteger)Eat;
+ (BOOL)initEat:(NSInteger)Eat;
+ (BOOL)initWithCacheDownloaderEat:(NSInteger)Eat;
+ (BOOL)cacheKeyForURLEat:(NSInteger)Eat;
+ (BOOL)cachedImageExistsForURLCompletionEat:(NSInteger)Eat;
+ (BOOL)diskImageExistsForURLCompletionEat:(NSInteger)Eat;
+ (BOOL)loadImageWithURLOptionsProgressCompletedEat:(NSInteger)Eat;
+ (BOOL)saveImageToCacheForurlEat:(NSInteger)Eat;
+ (BOOL)cancelAllEat:(NSInteger)Eat;
+ (BOOL)isRunningEat:(NSInteger)Eat;
+ (BOOL)safelyRemoveOperationFromRunningEat:(NSInteger)Eat;
+ (BOOL)callCompletionBlockForOperationCompletionErrorUrlEat:(NSInteger)Eat;
+ (BOOL)callCompletionBlockForOperationCompletionImageDataErrorCachetypeFinishedUrlEat:(NSInteger)Eat;

@end
