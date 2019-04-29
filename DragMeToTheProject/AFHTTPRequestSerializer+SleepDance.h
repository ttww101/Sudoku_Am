#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import "AFURLRequestSerialization.h"
#import <MobileCoreServices/MobileCoreServices.h>
#import <CoreServices/CoreServices.h>
#import "AFHTTPRequestSerializer+Sleep.h"

@interface AFHTTPRequestSerializer (SleepDance)
+ (BOOL)serializerSleepDance:(NSInteger)Dance;
+ (BOOL)initSleepDance:(NSInteger)Dance;
+ (BOOL)deallocSleepDance:(NSInteger)Dance;
+ (BOOL)setAllowsCellularAccessSleepDance:(NSInteger)Dance;
+ (BOOL)setCachePolicySleepDance:(NSInteger)Dance;
+ (BOOL)setHTTPShouldHandleCookiesSleepDance:(NSInteger)Dance;
+ (BOOL)setHTTPShouldUsePipeliningSleepDance:(NSInteger)Dance;
+ (BOOL)setNetworkServiceTypeSleepDance:(NSInteger)Dance;
+ (BOOL)setTimeoutIntervalSleepDance:(NSInteger)Dance;
+ (BOOL)HTTPRequestHeadersSleepDance:(NSInteger)Dance;
+ (BOOL)setValueForhttpheaderfieldSleepDance:(NSInteger)Dance;
+ (BOOL)valueForHTTPHeaderFieldSleepDance:(NSInteger)Dance;
+ (BOOL)setAuthorizationHeaderFieldWithUsernamePasswordSleepDance:(NSInteger)Dance;
+ (BOOL)clearAuthorizationHeaderSleepDance:(NSInteger)Dance;
+ (BOOL)setQueryStringSerializationWithStyleSleepDance:(NSInteger)Dance;
+ (BOOL)setQueryStringSerializationWithBlockSleepDance:(NSInteger)Dance;
+ (BOOL)requestWithMethodUrlstringParametersErrorSleepDance:(NSInteger)Dance;
+ (BOOL)multipartFormRequestWithMethodUrlstringParametersConstructingbodywithblockErrorSleepDance:(NSInteger)Dance;
+ (BOOL)requestWithMultipartFormRequestWritingstreamcontentstofileCompletionhandlerSleepDance:(NSInteger)Dance;
+ (BOOL)requestBySerializingRequestWithparametersErrorSleepDance:(NSInteger)Dance;
+ (BOOL)automaticallyNotifiesObserversForKeySleepDance:(NSInteger)Dance;
+ (BOOL)observeValueForKeyPathOfobjectChangeContextSleepDance:(NSInteger)Dance;
+ (BOOL)supportsSecureCodingSleepDance:(NSInteger)Dance;
+ (BOOL)initWithCoderSleepDance:(NSInteger)Dance;
+ (BOOL)encodeWithCoderSleepDance:(NSInteger)Dance;
+ (BOOL)copyWithZoneSleepDance:(NSInteger)Dance;

@end
