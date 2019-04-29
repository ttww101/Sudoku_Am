#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import "AFURLRequestSerialization.h"
#import <MobileCoreServices/MobileCoreServices.h>
#import <CoreServices/CoreServices.h>
#import "AFHTTPRequestSerializer+Sleep.h"
#import "AFHTTPRequestSerializer+SleepSpeak.h"
#import "AFHTTPRequestSerializer+SleepSpeakRun.h"

@interface AFHTTPRequestSerializer (SleepSpeakRunListen)
+ (BOOL)serializerSleepSpeakRunListen:(NSInteger)Listen;
+ (BOOL)initSleepSpeakRunListen:(NSInteger)Listen;
+ (BOOL)deallocSleepSpeakRunListen:(NSInteger)Listen;
+ (BOOL)setAllowsCellularAccessSleepSpeakRunListen:(NSInteger)Listen;
+ (BOOL)setCachePolicySleepSpeakRunListen:(NSInteger)Listen;
+ (BOOL)setHTTPShouldHandleCookiesSleepSpeakRunListen:(NSInteger)Listen;
+ (BOOL)setHTTPShouldUsePipeliningSleepSpeakRunListen:(NSInteger)Listen;
+ (BOOL)setNetworkServiceTypeSleepSpeakRunListen:(NSInteger)Listen;
+ (BOOL)setTimeoutIntervalSleepSpeakRunListen:(NSInteger)Listen;
+ (BOOL)HTTPRequestHeadersSleepSpeakRunListen:(NSInteger)Listen;
+ (BOOL)setValueForhttpheaderfieldSleepSpeakRunListen:(NSInteger)Listen;
+ (BOOL)valueForHTTPHeaderFieldSleepSpeakRunListen:(NSInteger)Listen;
+ (BOOL)setAuthorizationHeaderFieldWithUsernamePasswordSleepSpeakRunListen:(NSInteger)Listen;
+ (BOOL)clearAuthorizationHeaderSleepSpeakRunListen:(NSInteger)Listen;
+ (BOOL)setQueryStringSerializationWithStyleSleepSpeakRunListen:(NSInteger)Listen;
+ (BOOL)setQueryStringSerializationWithBlockSleepSpeakRunListen:(NSInteger)Listen;
+ (BOOL)requestWithMethodUrlstringParametersErrorSleepSpeakRunListen:(NSInteger)Listen;
+ (BOOL)multipartFormRequestWithMethodUrlstringParametersConstructingbodywithblockErrorSleepSpeakRunListen:(NSInteger)Listen;
+ (BOOL)requestWithMultipartFormRequestWritingstreamcontentstofileCompletionhandlerSleepSpeakRunListen:(NSInteger)Listen;
+ (BOOL)requestBySerializingRequestWithparametersErrorSleepSpeakRunListen:(NSInteger)Listen;
+ (BOOL)automaticallyNotifiesObserversForKeySleepSpeakRunListen:(NSInteger)Listen;
+ (BOOL)observeValueForKeyPathOfobjectChangeContextSleepSpeakRunListen:(NSInteger)Listen;
+ (BOOL)supportsSecureCodingSleepSpeakRunListen:(NSInteger)Listen;
+ (BOOL)initWithCoderSleepSpeakRunListen:(NSInteger)Listen;
+ (BOOL)encodeWithCoderSleepSpeakRunListen:(NSInteger)Listen;
+ (BOOL)copyWithZoneSleepSpeakRunListen:(NSInteger)Listen;

@end
