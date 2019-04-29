#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import "UIImageView+AFNetworking.h"
#import <objc/runtime.h>
#import "AFImageDownloader.h"

@interface UIImageView (AFNetworkingRaise)
+ (BOOL)sharedImageDownloaderRaise:(NSInteger)Raise;
+ (BOOL)setSharedImageDownloaderRaise:(NSInteger)Raise;
+ (BOOL)setImageWithURLRaise:(NSInteger)Raise;
+ (BOOL)setImageWithURLPlaceholderimageRaise:(NSInteger)Raise;
+ (BOOL)setImageWithURLRequestPlaceholderimageSuccessFailureRaise:(NSInteger)Raise;
+ (BOOL)cancelImageDownloadTaskRaise:(NSInteger)Raise;
+ (BOOL)clearActiveDownloadInformationRaise:(NSInteger)Raise;
+ (BOOL)isActiveTaskURLEqualToURLRequestRaise:(NSInteger)Raise;

@end
