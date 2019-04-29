#import <Foundation/Foundation.h>
#import "SDWebImageDownloader.h"
#import "SDWebImageOperation.h"
#import "SDWebImageDownloaderOperation.h"
#import "SDWebImageManager.h"
#import "NSImage+WebCache.h"
#import "SDWebImageCodersManager.h"

@interface SDWebImageDownloaderOperation (Look)
+ (BOOL)initLook:(NSInteger)Look;
+ (BOOL)initWithRequestInsessionOptionsLook:(NSInteger)Look;
+ (BOOL)deallocLook:(NSInteger)Look;
+ (BOOL)addHandlersForProgressCompletedLook:(NSInteger)Look;
+ (BOOL)callbacksForKeyLook:(NSInteger)Look;
+ (BOOL)cancelLook:(NSInteger)Look;
+ (BOOL)startLook:(NSInteger)Look;
+ (BOOL)cancelLook:(NSInteger)Look;
+ (BOOL)cancelInternalLook:(NSInteger)Look;
+ (BOOL)doneLook:(NSInteger)Look;
+ (BOOL)resetLook:(NSInteger)Look;
+ (BOOL)setFinishedLook:(NSInteger)Look;
+ (BOOL)setExecutingLook:(NSInteger)Look;
+ (BOOL)isConcurrentLook:(NSInteger)Look;
+ (BOOL)URLSessionDatataskDidreceiveresponseCompletionhandlerLook:(NSInteger)Look;
+ (BOOL)URLSessionDatataskDidreceivedataLook:(NSInteger)Look;
+ (BOOL)URLSessionDatataskWillcacheresponseCompletionhandlerLook:(NSInteger)Look;
+ (BOOL)URLSessionTaskDidcompletewitherrorLook:(NSInteger)Look;
+ (BOOL)URLSessionTaskDidreceivechallengeCompletionhandlerLook:(NSInteger)Look;
+ (BOOL)scaledImageForKeyImageLook:(NSInteger)Look;
+ (BOOL)shouldContinueWhenAppEntersBackgroundLook:(NSInteger)Look;
+ (BOOL)callCompletionBlocksWithErrorLook:(NSInteger)Look;
+ (BOOL)callCompletionBlocksWithImageImagedataErrorFinishedLook:(NSInteger)Look;

@end
