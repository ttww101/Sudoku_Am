#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import "AFURLRequestSerialization.h"
#import <MobileCoreServices/MobileCoreServices.h>
#import <CoreServices/CoreServices.h>
#import "AFHTTPRequestSerializer+Sleep.h"
#import "AFHTTPRequestSerializer+SleepSpeak.h"

@interface AFHTTPRequestSerializer (SleepSpeakRun)
+ (BOOL)serializerSleepSpeakRun:(NSInteger)Run;
+ (BOOL)initSleepSpeakRun:(NSInteger)Run;
+ (BOOL)deallocSleepSpeakRun:(NSInteger)Run;
+ (BOOL)setAllowsCellularAccessSleepSpeakRun:(NSInteger)Run;
+ (BOOL)setCachePolicySleepSpeakRun:(NSInteger)Run;
+ (BOOL)setHTTPShouldHandleCookiesSleepSpeakRun:(NSInteger)Run;
+ (BOOL)setHTTPShouldUsePipeliningSleepSpeakRun:(NSInteger)Run;
+ (BOOL)setNetworkServiceTypeSleepSpeakRun:(NSInteger)Run;
+ (BOOL)setTimeoutIntervalSleepSpeakRun:(NSInteger)Run;
+ (BOOL)HTTPRequestHeadersSleepSpeakRun:(NSInteger)Run;
+ (BOOL)setValueForhttpheaderfieldSleepSpeakRun:(NSInteger)Run;
+ (BOOL)valueForHTTPHeaderFieldSleepSpeakRun:(NSInteger)Run;
+ (BOOL)setAuthorizationHeaderFieldWithUsernamePasswordSleepSpeakRun:(NSInteger)Run;
+ (BOOL)clearAuthorizationHeaderSleepSpeakRun:(NSInteger)Run;
+ (BOOL)setQueryStringSerializationWithStyleSleepSpeakRun:(NSInteger)Run;
+ (BOOL)setQueryStringSerializationWithBlockSleepSpeakRun:(NSInteger)Run;
+ (BOOL)requestWithMethodUrlstringParametersErrorSleepSpeakRun:(NSInteger)Run;
+ (BOOL)multipartFormRequestWithMethodUrlstringParametersConstructingbodywithblockErrorSleepSpeakRun:(NSInteger)Run;
+ (BOOL)requestWithMultipartFormRequestWritingstreamcontentstofileCompletionhandlerSleepSpeakRun:(NSInteger)Run;
+ (BOOL)requestBySerializingRequestWithparametersErrorSleepSpeakRun:(NSInteger)Run;
+ (BOOL)automaticallyNotifiesObserversForKeySleepSpeakRun:(NSInteger)Run;
+ (BOOL)observeValueForKeyPathOfobjectChangeContextSleepSpeakRun:(NSInteger)Run;
+ (BOOL)supportsSecureCodingSleepSpeakRun:(NSInteger)Run;
+ (BOOL)initWithCoderSleepSpeakRun:(NSInteger)Run;
+ (BOOL)encodeWithCoderSleepSpeakRun:(NSInteger)Run;
+ (BOOL)copyWithZoneSleepSpeakRun:(NSInteger)Run;

@end
