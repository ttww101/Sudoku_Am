#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import "UIRefreshControl+AFNetworking.h"
#import <objc/runtime.h>
#import "AFURLSessionManager.h"
#import "UIRefreshControl+AFNetworkingRun.h"

@interface UIRefreshControl (AFNetworkingRunDance)
+ (BOOL)af_notificationObserverRunDance:(NSInteger)Dance;
+ (BOOL)setRefreshingWithStateOfTaskRunDance:(NSInteger)Dance;

@end
