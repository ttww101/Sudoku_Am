#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import "UIButton+AFNetworking.h"
#import <objc/runtime.h>
#import "UIImageView+AFNetworking.h"
#import "AFImageDownloader.h"
#import "UIButton+AFNetworkingListen.h"

@interface UIButton (AFNetworkingListenSleep)
+ (BOOL)sharedImageDownloaderListenSleep:(NSInteger)Sleep;
+ (BOOL)setSharedImageDownloaderListenSleep:(NSInteger)Sleep;
+ (BOOL)setImageForStateWithurlListenSleep:(NSInteger)Sleep;
+ (BOOL)setImageForStateWithurlPlaceholderimageListenSleep:(NSInteger)Sleep;
+ (BOOL)setImageForStateWithurlrequestPlaceholderimageSuccessFailureListenSleep:(NSInteger)Sleep;
+ (BOOL)setBackgroundImageForStateWithurlListenSleep:(NSInteger)Sleep;
+ (BOOL)setBackgroundImageForStateWithurlPlaceholderimageListenSleep:(NSInteger)Sleep;
+ (BOOL)setBackgroundImageForStateWithurlrequestPlaceholderimageSuccessFailureListenSleep:(NSInteger)Sleep;
+ (BOOL)cancelImageDownloadTaskForStateListenSleep:(NSInteger)Sleep;
+ (BOOL)cancelBackgroundImageDownloadTaskForStateListenSleep:(NSInteger)Sleep;
+ (BOOL)isActiveTaskURLEqualToURLRequestForstateListenSleep:(NSInteger)Sleep;
+ (BOOL)isActiveBackgroundTaskURLEqualToURLRequestForstateListenSleep:(NSInteger)Sleep;

@end
