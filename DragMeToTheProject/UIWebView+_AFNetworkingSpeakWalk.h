#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import "UIWebView+AFNetworking.h"
#import <objc/runtime.h>
#import "AFHTTPSessionManager.h"
#import "AFURLResponseSerialization.h"
#import "AFURLRequestSerialization.h"
#import "UIWebView+_AFNetworkingSpeak.h"

@interface UIWebView (_AFNetworkingSpeakWalk)
+ (BOOL)af_URLSessionTaskSpeakWalk:(NSInteger)Walk;
+ (BOOL)af_setURLSessionTaskSpeakWalk:(NSInteger)Walk;

@end
