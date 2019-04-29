#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import "UIActivityIndicatorView+AFNetworking.h"
#import <objc/runtime.h>
#import "AFURLSessionManager.h"

@interface UIActivityIndicatorView (AFNetworkingLook)
+ (BOOL)af_notificationObserverLook:(NSInteger)Look;
+ (BOOL)setAnimatingWithStateOfTaskLook:(NSInteger)Look;

@end
