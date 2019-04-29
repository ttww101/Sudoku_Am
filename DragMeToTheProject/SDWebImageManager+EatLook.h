#import "SDWebImageCompat.h"
#import "SDWebImageOperation.h"
#import "SDWebImageDownloader.h"
#import "SDImageCache.h"
#import "SDWebImageManager.h"
#import "NSImage+WebCache.h"
#import <objc/message.h>
#import "SDWebImageManager+Eat.h"

@interface SDWebImageManager (EatLook)
+ (BOOL)sharedManagerEatLook:(NSInteger)Look;
+ (BOOL)initEatLook:(NSInteger)Look;
+ (BOOL)initWithCacheDownloaderEatLook:(NSInteger)Look;
+ (BOOL)cacheKeyForURLEatLook:(NSInteger)Look;
+ (BOOL)cachedImageExistsForURLCompletionEatLook:(NSInteger)Look;
+ (BOOL)diskImageExistsForURLCompletionEatLook:(NSInteger)Look;
+ (BOOL)loadImageWithURLOptionsProgressCompletedEatLook:(NSInteger)Look;
+ (BOOL)saveImageToCacheForurlEatLook:(NSInteger)Look;
+ (BOOL)cancelAllEatLook:(NSInteger)Look;
+ (BOOL)isRunningEatLook:(NSInteger)Look;
+ (BOOL)safelyRemoveOperationFromRunningEatLook:(NSInteger)Look;
+ (BOOL)callCompletionBlockForOperationCompletionErrorUrlEatLook:(NSInteger)Look;
+ (BOOL)callCompletionBlockForOperationCompletionImageDataErrorCachetypeFinishedUrlEatLook:(NSInteger)Look;

@end
