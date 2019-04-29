#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import "UIWebView+AFNetworking.h"
#import <objc/runtime.h>
#import "AFHTTPSessionManager.h"
#import "AFURLResponseSerialization.h"
#import "AFURLRequestSerialization.h"

@interface UIWebView (AFNetworkingRaise)
+ (BOOL)sessionManagerRaise:(NSInteger)Raise;
+ (BOOL)setSessionManagerRaise:(NSInteger)Raise;
+ (BOOL)responseSerializerRaise:(NSInteger)Raise;
+ (BOOL)setResponseSerializerRaise:(NSInteger)Raise;
+ (BOOL)loadRequestProgressSuccessFailureRaise:(NSInteger)Raise;
+ (BOOL)loadRequestMimetypeTextencodingnameProgressSuccessFailureRaise:(NSInteger)Raise;

@end
