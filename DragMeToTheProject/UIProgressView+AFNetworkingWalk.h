#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import "UIProgressView+AFNetworking.h"
#import <objc/runtime.h>
#import "AFURLSessionManager.h"

@interface UIProgressView (AFNetworkingWalk)
+ (BOOL)af_uploadProgressAnimatedWalk:(NSInteger)Walk;
+ (BOOL)af_setUploadProgressAnimatedWalk:(NSInteger)Walk;
+ (BOOL)af_downloadProgressAnimatedWalk:(NSInteger)Walk;
+ (BOOL)af_setDownloadProgressAnimatedWalk:(NSInteger)Walk;
+ (BOOL)setProgressWithUploadProgressOfTaskAnimatedWalk:(NSInteger)Walk;
+ (BOOL)setProgressWithDownloadProgressOfTaskAnimatedWalk:(NSInteger)Walk;
+ (BOOL)observeValueForKeyPathOfobjectChangeContextWalk:(NSInteger)Walk;

@end
