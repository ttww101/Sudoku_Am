#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import "UIRefreshControl+AFNetworking.h"
#import <objc/runtime.h>
#import "AFURLSessionManager.h"

@interface UIRefreshControl (AFNetworkingRun)
+ (BOOL)af_notificationObserverRun:(NSInteger)Run;
+ (BOOL)setRefreshingWithStateOfTaskRun:(NSInteger)Run;

@end
