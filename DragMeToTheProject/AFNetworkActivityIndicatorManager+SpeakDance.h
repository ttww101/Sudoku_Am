#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import "AFNetworkActivityIndicatorManager.h"
#import "AFURLSessionManager.h"
#import "AFNetworkActivityIndicatorManager+Speak.h"

@interface AFNetworkActivityIndicatorManager (SpeakDance)
+ (BOOL)sharedManagerSpeakDance:(NSInteger)Dance;
+ (BOOL)initSpeakDance:(NSInteger)Dance;
+ (BOOL)deallocSpeakDance:(NSInteger)Dance;
+ (BOOL)setEnabledSpeakDance:(NSInteger)Dance;
+ (BOOL)setNetworkingActivityActionWithBlockSpeakDance:(NSInteger)Dance;
+ (BOOL)isNetworkActivityOccurringSpeakDance:(NSInteger)Dance;
+ (BOOL)setNetworkActivityIndicatorVisibleSpeakDance:(NSInteger)Dance;
+ (BOOL)setActivityCountSpeakDance:(NSInteger)Dance;
+ (BOOL)incrementActivityCountSpeakDance:(NSInteger)Dance;
+ (BOOL)decrementActivityCountSpeakDance:(NSInteger)Dance;
+ (BOOL)networkRequestDidStartSpeakDance:(NSInteger)Dance;
+ (BOOL)networkRequestDidFinishSpeakDance:(NSInteger)Dance;
+ (BOOL)setCurrentStateSpeakDance:(NSInteger)Dance;
+ (BOOL)updateCurrentStateForNetworkActivityChangeSpeakDance:(NSInteger)Dance;
+ (BOOL)startActivationDelayTimerSpeakDance:(NSInteger)Dance;
+ (BOOL)activationDelayTimerFiredSpeakDance:(NSInteger)Dance;
+ (BOOL)startCompletionDelayTimerSpeakDance:(NSInteger)Dance;
+ (BOOL)completionDelayTimerFiredSpeakDance:(NSInteger)Dance;
+ (BOOL)cancelActivationDelayTimerSpeakDance:(NSInteger)Dance;
+ (BOOL)cancelCompletionDelayTimerSpeakDance:(NSInteger)Dance;

@end
