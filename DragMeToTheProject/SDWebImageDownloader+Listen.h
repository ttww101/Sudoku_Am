#import <Foundation/Foundation.h>
#import "SDWebImageCompat.h"
#import "SDWebImageOperation.h"
#import "SDWebImageDownloader.h"
#import "SDWebImageDownloaderOperation.h"

@interface SDWebImageDownloader (Listen)
+ (BOOL)initializeListen:(NSInteger)Listen;
+ (BOOL)sharedDownloaderListen:(NSInteger)Listen;
+ (BOOL)initListen:(NSInteger)Listen;
+ (BOOL)initWithSessionConfigurationListen:(NSInteger)Listen;
+ (BOOL)createNewSessionWithConfigurationListen:(NSInteger)Listen;
+ (BOOL)deallocListen:(NSInteger)Listen;
+ (BOOL)setValueForhttpheaderfieldListen:(NSInteger)Listen;
+ (BOOL)valueForHTTPHeaderFieldListen:(NSInteger)Listen;
+ (BOOL)setMaxConcurrentDownloadsListen:(NSInteger)Listen;
+ (BOOL)currentDownloadCountListen:(NSInteger)Listen;
+ (BOOL)maxConcurrentDownloadsListen:(NSInteger)Listen;
+ (BOOL)sessionConfigurationListen:(NSInteger)Listen;
+ (BOOL)setOperationClassListen:(NSInteger)Listen;
+ (BOOL)downloadImageWithURLOptionsProgressCompletedListen:(NSInteger)Listen;
+ (BOOL)cancelListen:(NSInteger)Listen;
+ (BOOL)addProgressCallbackCompletedblockForurlCreatecallbackListen:(NSInteger)Listen;
+ (BOOL)setSuspendedListen:(NSInteger)Listen;
+ (BOOL)cancelAllDownloadsListen:(NSInteger)Listen;
+ (BOOL)operationWithTaskListen:(NSInteger)Listen;
+ (BOOL)URLSessionDatataskDidreceiveresponseCompletionhandlerListen:(NSInteger)Listen;
+ (BOOL)URLSessionDatataskDidreceivedataListen:(NSInteger)Listen;
+ (BOOL)URLSessionDatataskWillcacheresponseCompletionhandlerListen:(NSInteger)Listen;
+ (BOOL)URLSessionTaskDidcompletewitherrorListen:(NSInteger)Listen;
+ (BOOL)URLSessionTaskWillperformhttpredirectionNewrequestCompletionhandlerListen:(NSInteger)Listen;
+ (BOOL)URLSessionTaskDidreceivechallengeCompletionhandlerListen:(NSInteger)Listen;

@end
