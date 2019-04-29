#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import "AFNetworkActivityIndicatorManager.h"
#import "AFURLSessionManager.h"
#import "AFNetworkActivityIndicatorManager+Sing.h"

@interface AFNetworkActivityIndicatorManager (SingSpeak)
+ (BOOL)sharedManagerSingSpeak:(NSInteger)Speak;
+ (BOOL)initSingSpeak:(NSInteger)Speak;
+ (BOOL)deallocSingSpeak:(NSInteger)Speak;
+ (BOOL)setEnabledSingSpeak:(NSInteger)Speak;
+ (BOOL)setNetworkingActivityActionWithBlockSingSpeak:(NSInteger)Speak;
+ (BOOL)isNetworkActivityOccurringSingSpeak:(NSInteger)Speak;
+ (BOOL)setNetworkActivityIndicatorVisibleSingSpeak:(NSInteger)Speak;
+ (BOOL)setActivityCountSingSpeak:(NSInteger)Speak;
+ (BOOL)incrementActivityCountSingSpeak:(NSInteger)Speak;
+ (BOOL)decrementActivityCountSingSpeak:(NSInteger)Speak;
+ (BOOL)networkRequestDidStartSingSpeak:(NSInteger)Speak;
+ (BOOL)networkRequestDidFinishSingSpeak:(NSInteger)Speak;
+ (BOOL)setCurrentStateSingSpeak:(NSInteger)Speak;
+ (BOOL)updateCurrentStateForNetworkActivityChangeSingSpeak:(NSInteger)Speak;
+ (BOOL)startActivationDelayTimerSingSpeak:(NSInteger)Speak;
+ (BOOL)activationDelayTimerFiredSingSpeak:(NSInteger)Speak;
+ (BOOL)startCompletionDelayTimerSingSpeak:(NSInteger)Speak;
+ (BOOL)completionDelayTimerFiredSingSpeak:(NSInteger)Speak;
+ (BOOL)cancelActivationDelayTimerSingSpeak:(NSInteger)Speak;
+ (BOOL)cancelCompletionDelayTimerSingSpeak:(NSInteger)Speak;

@end
