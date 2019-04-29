#import <Foundation/Foundation.h>
#import "SDWebImageDownloader.h"
#import "SDWebImageOperation.h"
#import "SDWebImageDownloaderOperation.h"
#import "SDWebImageManager.h"
#import "NSImage+WebCache.h"
#import "SDWebImageCodersManager.h"
#import "SDWebImageDownloaderOperation+Look.h"

@interface SDWebImageDownloaderOperation (LookWalk)
+ (BOOL)initLookWalk:(NSInteger)Walk;
+ (BOOL)initWithRequestInsessionOptionsLookWalk:(NSInteger)Walk;
+ (BOOL)deallocLookWalk:(NSInteger)Walk;
+ (BOOL)addHandlersForProgressCompletedLookWalk:(NSInteger)Walk;
+ (BOOL)callbacksForKeyLookWalk:(NSInteger)Walk;
+ (BOOL)cancelLookWalk:(NSInteger)Walk;
+ (BOOL)startLookWalk:(NSInteger)Walk;
+ (BOOL)cancelLookWalk:(NSInteger)Walk;
+ (BOOL)cancelInternalLookWalk:(NSInteger)Walk;
+ (BOOL)doneLookWalk:(NSInteger)Walk;
+ (BOOL)resetLookWalk:(NSInteger)Walk;
+ (BOOL)setFinishedLookWalk:(NSInteger)Walk;
+ (BOOL)setExecutingLookWalk:(NSInteger)Walk;
+ (BOOL)isConcurrentLookWalk:(NSInteger)Walk;
+ (BOOL)URLSessionDatataskDidreceiveresponseCompletionhandlerLookWalk:(NSInteger)Walk;
+ (BOOL)URLSessionDatataskDidreceivedataLookWalk:(NSInteger)Walk;
+ (BOOL)URLSessionDatataskWillcacheresponseCompletionhandlerLookWalk:(NSInteger)Walk;
+ (BOOL)URLSessionTaskDidcompletewitherrorLookWalk:(NSInteger)Walk;
+ (BOOL)URLSessionTaskDidreceivechallengeCompletionhandlerLookWalk:(NSInteger)Walk;
+ (BOOL)scaledImageForKeyImageLookWalk:(NSInteger)Walk;
+ (BOOL)shouldContinueWhenAppEntersBackgroundLookWalk:(NSInteger)Walk;
+ (BOOL)callCompletionBlocksWithErrorLookWalk:(NSInteger)Walk;
+ (BOOL)callCompletionBlocksWithImageImagedataErrorFinishedLookWalk:(NSInteger)Walk;

@end
