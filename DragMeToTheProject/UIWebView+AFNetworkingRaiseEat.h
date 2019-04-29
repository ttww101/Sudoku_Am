#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import "UIWebView+AFNetworking.h"
#import <objc/runtime.h>
#import "AFHTTPSessionManager.h"
#import "AFURLResponseSerialization.h"
#import "AFURLRequestSerialization.h"
#import "UIWebView+AFNetworkingRaise.h"

@interface UIWebView (AFNetworkingRaiseEat)
+ (BOOL)sessionManagerRaiseEat:(NSInteger)Eat;
+ (BOOL)setSessionManagerRaiseEat:(NSInteger)Eat;
+ (BOOL)responseSerializerRaiseEat:(NSInteger)Eat;
+ (BOOL)setResponseSerializerRaiseEat:(NSInteger)Eat;
+ (BOOL)loadRequestProgressSuccessFailureRaiseEat:(NSInteger)Eat;
+ (BOOL)loadRequestMimetypeTextencodingnameProgressSuccessFailureRaiseEat:(NSInteger)Eat;

@end
