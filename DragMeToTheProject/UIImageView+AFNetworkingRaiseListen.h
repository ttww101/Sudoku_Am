#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import "UIImageView+AFNetworking.h"
#import <objc/runtime.h>
#import "AFImageDownloader.h"
#import "UIImageView+AFNetworkingRaise.h"

@interface UIImageView (AFNetworkingRaiseListen)
+ (BOOL)sharedImageDownloaderRaiseListen:(NSInteger)Listen;
+ (BOOL)setSharedImageDownloaderRaiseListen:(NSInteger)Listen;
+ (BOOL)setImageWithURLRaiseListen:(NSInteger)Listen;
+ (BOOL)setImageWithURLPlaceholderimageRaiseListen:(NSInteger)Listen;
+ (BOOL)setImageWithURLRequestPlaceholderimageSuccessFailureRaiseListen:(NSInteger)Listen;
+ (BOOL)cancelImageDownloadTaskRaiseListen:(NSInteger)Listen;
+ (BOOL)clearActiveDownloadInformationRaiseListen:(NSInteger)Listen;
+ (BOOL)isActiveTaskURLEqualToURLRequestRaiseListen:(NSInteger)Listen;

@end
