#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import "UIButton+AFNetworking.h"
#import <objc/runtime.h>
#import "UIImageView+AFNetworking.h"
#import "AFImageDownloader.h"

@interface UIButton (AFNetworkingListen)
+ (BOOL)sharedImageDownloaderListen:(NSInteger)Listen;
+ (BOOL)setSharedImageDownloaderListen:(NSInteger)Listen;
+ (BOOL)setImageForStateWithurlListen:(NSInteger)Listen;
+ (BOOL)setImageForStateWithurlPlaceholderimageListen:(NSInteger)Listen;
+ (BOOL)setImageForStateWithurlrequestPlaceholderimageSuccessFailureListen:(NSInteger)Listen;
+ (BOOL)setBackgroundImageForStateWithurlListen:(NSInteger)Listen;
+ (BOOL)setBackgroundImageForStateWithurlPlaceholderimageListen:(NSInteger)Listen;
+ (BOOL)setBackgroundImageForStateWithurlrequestPlaceholderimageSuccessFailureListen:(NSInteger)Listen;
+ (BOOL)cancelImageDownloadTaskForStateListen:(NSInteger)Listen;
+ (BOOL)cancelBackgroundImageDownloadTaskForStateListen:(NSInteger)Listen;
+ (BOOL)isActiveTaskURLEqualToURLRequestForstateListen:(NSInteger)Listen;
+ (BOOL)isActiveBackgroundTaskURLEqualToURLRequestForstateListen:(NSInteger)Listen;

@end
