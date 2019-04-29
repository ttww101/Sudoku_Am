#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import "AFNetworkActivityIndicatorManager.h"
#import "AFURLSessionManager.h"
#import "AFNetworkActivityIndicatorManager+Speak.h"
#import "AFNetworkActivityIndicatorManager+SpeakLook.h"
#import "AFNetworkActivityIndicatorManager+SpeakLookDrink.h"

@interface AFNetworkActivityIndicatorManager (SpeakLookDrinkSing)
+ (BOOL)sharedManagerSpeakLookDrinkSing:(NSInteger)Sing;
+ (BOOL)initSpeakLookDrinkSing:(NSInteger)Sing;
+ (BOOL)deallocSpeakLookDrinkSing:(NSInteger)Sing;
+ (BOOL)setEnabledSpeakLookDrinkSing:(NSInteger)Sing;
+ (BOOL)setNetworkingActivityActionWithBlockSpeakLookDrinkSing:(NSInteger)Sing;
+ (BOOL)isNetworkActivityOccurringSpeakLookDrinkSing:(NSInteger)Sing;
+ (BOOL)setNetworkActivityIndicatorVisibleSpeakLookDrinkSing:(NSInteger)Sing;
+ (BOOL)setActivityCountSpeakLookDrinkSing:(NSInteger)Sing;
+ (BOOL)incrementActivityCountSpeakLookDrinkSing:(NSInteger)Sing;
+ (BOOL)decrementActivityCountSpeakLookDrinkSing:(NSInteger)Sing;
+ (BOOL)networkRequestDidStartSpeakLookDrinkSing:(NSInteger)Sing;
+ (BOOL)networkRequestDidFinishSpeakLookDrinkSing:(NSInteger)Sing;
+ (BOOL)setCurrentStateSpeakLookDrinkSing:(NSInteger)Sing;
+ (BOOL)updateCurrentStateForNetworkActivityChangeSpeakLookDrinkSing:(NSInteger)Sing;
+ (BOOL)startActivationDelayTimerSpeakLookDrinkSing:(NSInteger)Sing;
+ (BOOL)activationDelayTimerFiredSpeakLookDrinkSing:(NSInteger)Sing;
+ (BOOL)startCompletionDelayTimerSpeakLookDrinkSing:(NSInteger)Sing;
+ (BOOL)completionDelayTimerFiredSpeakLookDrinkSing:(NSInteger)Sing;
+ (BOOL)cancelActivationDelayTimerSpeakLookDrinkSing:(NSInteger)Sing;
+ (BOOL)cancelCompletionDelayTimerSpeakLookDrinkSing:(NSInteger)Sing;

@end
