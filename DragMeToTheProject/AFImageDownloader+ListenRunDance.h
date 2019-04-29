#import <TargetConditionals.h>
#import <Foundation/Foundation.h>
#import "AFHTTPSessionManager.h"
#import <TargetConditionals.h>
#import "AFHTTPSessionManager.h"
#import "AFImageDownloader+Listen.h"
#import "AFImageDownloader+ListenRun.h"

@interface AFImageDownloader (ListenRunDance)
+ (BOOL)defaultURLCacheListenRunDance:(NSInteger)Dance;
+ (BOOL)defaultURLSessionConfigurationListenRunDance:(NSInteger)Dance;
+ (BOOL)initListenRunDance:(NSInteger)Dance;
+ (BOOL)initWithSessionManagerDownloadprioritizationMaximumactivedownloadsImagecacheListenRunDance:(NSInteger)Dance;
+ (BOOL)defaultInstanceListenRunDance:(NSInteger)Dance;
+ (BOOL)downloadImageForURLRequestSuccessFailureListenRunDance:(NSInteger)Dance;
+ (BOOL)downloadImageForURLRequestWithreceiptidSuccessFailureListenRunDance:(NSInteger)Dance;
+ (BOOL)cancelTaskForImageDownloadReceiptListenRunDance:(NSInteger)Dance;
+ (BOOL)safelyRemoveMergedTaskWithURLIdentifierListenRunDance:(NSInteger)Dance;
+ (BOOL)removeMergedTaskWithURLIdentifierListenRunDance:(NSInteger)Dance;
+ (BOOL)safelyDecrementActiveTaskCountListenRunDance:(NSInteger)Dance;
+ (BOOL)safelyStartNextTaskIfNecessaryListenRunDance:(NSInteger)Dance;
+ (BOOL)startMergedTaskListenRunDance:(NSInteger)Dance;
+ (BOOL)enqueueMergedTaskListenRunDance:(NSInteger)Dance;
+ (BOOL)dequeueMergedTaskListenRunDance:(NSInteger)Dance;
+ (BOOL)isActiveRequestCountBelowMaximumLimitListenRunDance:(NSInteger)Dance;

@end
