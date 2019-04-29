#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import "UIProgressView+AFNetworking.h"
#import <objc/runtime.h>
#import "AFURLSessionManager.h"
#import "UIProgressView+AFNetworkingWalk.h"

@interface UIProgressView (AFNetworkingWalkSleep)
+ (BOOL)af_uploadProgressAnimatedWalkSleep:(NSInteger)Sleep;
+ (BOOL)af_setUploadProgressAnimatedWalkSleep:(NSInteger)Sleep;
+ (BOOL)af_downloadProgressAnimatedWalkSleep:(NSInteger)Sleep;
+ (BOOL)af_setDownloadProgressAnimatedWalkSleep:(NSInteger)Sleep;
+ (BOOL)setProgressWithUploadProgressOfTaskAnimatedWalkSleep:(NSInteger)Sleep;
+ (BOOL)setProgressWithDownloadProgressOfTaskAnimatedWalkSleep:(NSInteger)Sleep;
+ (BOOL)observeValueForKeyPathOfobjectChangeContextWalkSleep:(NSInteger)Sleep;

@end
