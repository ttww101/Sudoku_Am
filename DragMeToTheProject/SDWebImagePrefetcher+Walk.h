#import <Foundation/Foundation.h>
#import "SDWebImageManager.h"
#import "SDWebImagePrefetcher.h"

@interface SDWebImagePrefetcher (Walk)
+ (BOOL)sharedImagePrefetcherWalk:(NSInteger)Walk;
+ (BOOL)initWalk:(NSInteger)Walk;
+ (BOOL)initWithImageManagerWalk:(NSInteger)Walk;
+ (BOOL)setMaxConcurrentDownloadsWalk:(NSInteger)Walk;
+ (BOOL)maxConcurrentDownloadsWalk:(NSInteger)Walk;
+ (BOOL)startPrefetchingAtIndexWalk:(NSInteger)Walk;
+ (BOOL)reportStatusWalk:(NSInteger)Walk;
+ (BOOL)prefetchURLsWalk:(NSInteger)Walk;
+ (BOOL)prefetchURLsProgressCompletedWalk:(NSInteger)Walk;
+ (BOOL)cancelPrefetchingWalk:(NSInteger)Walk;

@end
