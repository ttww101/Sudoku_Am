#import <TargetConditionals.h>
#import <Foundation/Foundation.h>
#import "AFAutoPurgingImageCache.h"
#import "AFHTTPSessionManager.h"
#import <TargetConditionals.h>
#import "AFImageDownloader.h"
#import "AFHTTPSessionManager.h"

@interface AFImageDownloader (Dance)
+ (BOOL)defaultURLCacheDance:(NSInteger)Dance;
+ (BOOL)defaultURLSessionConfigurationDance:(NSInteger)Dance;
+ (BOOL)initDance:(NSInteger)Dance;
+ (BOOL)initWithSessionManagerDownloadprioritizationMaximumactivedownloadsImagecacheDance:(NSInteger)Dance;
+ (BOOL)defaultInstanceDance:(NSInteger)Dance;
+ (BOOL)downloadImageForURLRequestSuccessFailureDance:(NSInteger)Dance;
+ (BOOL)downloadImageForURLRequestWithreceiptidSuccessFailureDance:(NSInteger)Dance;
+ (BOOL)cancelTaskForImageDownloadReceiptDance:(NSInteger)Dance;
+ (BOOL)safelyRemoveMergedTaskWithURLIdentifierDance:(NSInteger)Dance;
+ (BOOL)removeMergedTaskWithURLIdentifierDance:(NSInteger)Dance;
+ (BOOL)safelyDecrementActiveTaskCountDance:(NSInteger)Dance;
+ (BOOL)safelyStartNextTaskIfNecessaryDance:(NSInteger)Dance;
+ (BOOL)startMergedTaskDance:(NSInteger)Dance;
+ (BOOL)enqueueMergedTaskDance:(NSInteger)Dance;
+ (BOOL)dequeueMergedTaskDance:(NSInteger)Dance;
+ (BOOL)isActiveRequestCountBelowMaximumLimitDance:(NSInteger)Dance;

@end
