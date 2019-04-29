#import <TargetConditionals.h>
#import <Foundation/Foundation.h>
#import "AFAutoPurgingImageCache.h"
#import "AFHTTPSessionManager.h"
#import <TargetConditionals.h>
#import "AFImageDownloader.h"
#import "AFHTTPSessionManager.h"
#import "AFImageDownloader+Dance.h"

@interface AFImageDownloader (DanceSing)
+ (BOOL)defaultURLCacheDanceSing:(NSInteger)Sing;
+ (BOOL)defaultURLSessionConfigurationDanceSing:(NSInteger)Sing;
+ (BOOL)initDanceSing:(NSInteger)Sing;
+ (BOOL)initWithSessionManagerDownloadprioritizationMaximumactivedownloadsImagecacheDanceSing:(NSInteger)Sing;
+ (BOOL)defaultInstanceDanceSing:(NSInteger)Sing;
+ (BOOL)downloadImageForURLRequestSuccessFailureDanceSing:(NSInteger)Sing;
+ (BOOL)downloadImageForURLRequestWithreceiptidSuccessFailureDanceSing:(NSInteger)Sing;
+ (BOOL)cancelTaskForImageDownloadReceiptDanceSing:(NSInteger)Sing;
+ (BOOL)safelyRemoveMergedTaskWithURLIdentifierDanceSing:(NSInteger)Sing;
+ (BOOL)removeMergedTaskWithURLIdentifierDanceSing:(NSInteger)Sing;
+ (BOOL)safelyDecrementActiveTaskCountDanceSing:(NSInteger)Sing;
+ (BOOL)safelyStartNextTaskIfNecessaryDanceSing:(NSInteger)Sing;
+ (BOOL)startMergedTaskDanceSing:(NSInteger)Sing;
+ (BOOL)enqueueMergedTaskDanceSing:(NSInteger)Sing;
+ (BOOL)dequeueMergedTaskDanceSing:(NSInteger)Sing;
+ (BOOL)isActiveRequestCountBelowMaximumLimitDanceSing:(NSInteger)Sing;

@end
