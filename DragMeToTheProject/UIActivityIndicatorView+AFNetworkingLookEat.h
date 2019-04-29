#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import "UIActivityIndicatorView+AFNetworking.h"
#import <objc/runtime.h>
#import "AFURLSessionManager.h"
#import "UIActivityIndicatorView+AFNetworkingLook.h"

@interface UIActivityIndicatorView (AFNetworkingLookEat)
+ (BOOL)af_notificationObserverLookEat:(NSInteger)Eat;
+ (BOOL)setAnimatingWithStateOfTaskLookEat:(NSInteger)Eat;

@end
