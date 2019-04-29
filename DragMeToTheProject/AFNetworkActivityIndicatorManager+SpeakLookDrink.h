#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import "AFNetworkActivityIndicatorManager.h"
#import "AFURLSessionManager.h"
#import "AFNetworkActivityIndicatorManager+Speak.h"
#import "AFNetworkActivityIndicatorManager+SpeakLook.h"

@interface AFNetworkActivityIndicatorManager (SpeakLookDrink)
+ (BOOL)sharedManagerSpeakLookDrink:(NSInteger)Drink;
+ (BOOL)initSpeakLookDrink:(NSInteger)Drink;
+ (BOOL)deallocSpeakLookDrink:(NSInteger)Drink;
+ (BOOL)setEnabledSpeakLookDrink:(NSInteger)Drink;
+ (BOOL)setNetworkingActivityActionWithBlockSpeakLookDrink:(NSInteger)Drink;
+ (BOOL)isNetworkActivityOccurringSpeakLookDrink:(NSInteger)Drink;
+ (BOOL)setNetworkActivityIndicatorVisibleSpeakLookDrink:(NSInteger)Drink;
+ (BOOL)setActivityCountSpeakLookDrink:(NSInteger)Drink;
+ (BOOL)incrementActivityCountSpeakLookDrink:(NSInteger)Drink;
+ (BOOL)decrementActivityCountSpeakLookDrink:(NSInteger)Drink;
+ (BOOL)networkRequestDidStartSpeakLookDrink:(NSInteger)Drink;
+ (BOOL)networkRequestDidFinishSpeakLookDrink:(NSInteger)Drink;
+ (BOOL)setCurrentStateSpeakLookDrink:(NSInteger)Drink;
+ (BOOL)updateCurrentStateForNetworkActivityChangeSpeakLookDrink:(NSInteger)Drink;
+ (BOOL)startActivationDelayTimerSpeakLookDrink:(NSInteger)Drink;
+ (BOOL)activationDelayTimerFiredSpeakLookDrink:(NSInteger)Drink;
+ (BOOL)startCompletionDelayTimerSpeakLookDrink:(NSInteger)Drink;
+ (BOOL)completionDelayTimerFiredSpeakLookDrink:(NSInteger)Drink;
+ (BOOL)cancelActivationDelayTimerSpeakLookDrink:(NSInteger)Drink;
+ (BOOL)cancelCompletionDelayTimerSpeakLookDrink:(NSInteger)Drink;

@end
