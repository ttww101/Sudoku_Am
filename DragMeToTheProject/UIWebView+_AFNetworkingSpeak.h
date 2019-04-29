#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import "UIWebView+AFNetworking.h"
#import <objc/runtime.h>
#import "AFHTTPSessionManager.h"
#import "AFURLResponseSerialization.h"
#import "AFURLRequestSerialization.h"

@interface UIWebView (_AFNetworkingSpeak)
+ (BOOL)af_URLSessionTaskSpeak:(NSInteger)Speak;
+ (BOOL)af_setURLSessionTaskSpeak:(NSInteger)Speak;

@end
