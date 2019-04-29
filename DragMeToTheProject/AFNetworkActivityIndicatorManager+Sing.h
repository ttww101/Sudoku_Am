#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import "AFNetworkActivityIndicatorManager.h"
#import "AFURLSessionManager.h"

@interface AFNetworkActivityIndicatorManager (Sing)
+ (BOOL)sharedManagerSing:(NSInteger)Sing;
+ (BOOL)initSing:(NSInteger)Sing;
+ (BOOL)deallocSing:(NSInteger)Sing;
+ (BOOL)setEnabledSing:(NSInteger)Sing;
+ (BOOL)setNetworkingActivityActionWithBlockSing:(NSInteger)Sing;
+ (BOOL)isNetworkActivityOccurringSing:(NSInteger)Sing;
+ (BOOL)setNetworkActivityIndicatorVisibleSing:(NSInteger)Sing;
+ (BOOL)setActivityCountSing:(NSInteger)Sing;
+ (BOOL)incrementActivityCountSing:(NSInteger)Sing;
+ (BOOL)decrementActivityCountSing:(NSInteger)Sing;
+ (BOOL)networkRequestDidStartSing:(NSInteger)Sing;
+ (BOOL)networkRequestDidFinishSing:(NSInteger)Sing;
+ (BOOL)setCurrentStateSing:(NSInteger)Sing;
+ (BOOL)updateCurrentStateForNetworkActivityChangeSing:(NSInteger)Sing;
+ (BOOL)startActivationDelayTimerSing:(NSInteger)Sing;
+ (BOOL)activationDelayTimerFiredSing:(NSInteger)Sing;
+ (BOOL)startCompletionDelayTimerSing:(NSInteger)Sing;
+ (BOOL)completionDelayTimerFiredSing:(NSInteger)Sing;
+ (BOOL)cancelActivationDelayTimerSing:(NSInteger)Sing;
+ (BOOL)cancelCompletionDelayTimerSing:(NSInteger)Sing;

@end
