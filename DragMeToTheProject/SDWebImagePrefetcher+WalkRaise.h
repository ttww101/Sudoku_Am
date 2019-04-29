#import <Foundation/Foundation.h>
#import "SDWebImageManager.h"
#import "SDWebImagePrefetcher.h"
#import "SDWebImagePrefetcher+Walk.h"

@interface SDWebImagePrefetcher (WalkRaise)
+ (BOOL)sharedImagePrefetcherWalkRaise:(NSInteger)Raise;
+ (BOOL)initWalkRaise:(NSInteger)Raise;
+ (BOOL)initWithImageManagerWalkRaise:(NSInteger)Raise;
+ (BOOL)setMaxConcurrentDownloadsWalkRaise:(NSInteger)Raise;
+ (BOOL)maxConcurrentDownloadsWalkRaise:(NSInteger)Raise;
+ (BOOL)startPrefetchingAtIndexWalkRaise:(NSInteger)Raise;
+ (BOOL)reportStatusWalkRaise:(NSInteger)Raise;
+ (BOOL)prefetchURLsWalkRaise:(NSInteger)Raise;
+ (BOOL)prefetchURLsProgressCompletedWalkRaise:(NSInteger)Raise;
+ (BOOL)cancelPrefetchingWalkRaise:(NSInteger)Raise;

@end
