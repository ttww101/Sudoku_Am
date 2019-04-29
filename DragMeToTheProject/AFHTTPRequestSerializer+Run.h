#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import "AFURLRequestSerialization.h"
#import <MobileCoreServices/MobileCoreServices.h>
#import <CoreServices/CoreServices.h>

@interface AFHTTPRequestSerializer (Run)
+ (BOOL)serializerRun:(NSInteger)Run;
+ (BOOL)initRun:(NSInteger)Run;
+ (BOOL)deallocRun:(NSInteger)Run;
+ (BOOL)setAllowsCellularAccessRun:(NSInteger)Run;
+ (BOOL)setCachePolicyRun:(NSInteger)Run;
+ (BOOL)setHTTPShouldHandleCookiesRun:(NSInteger)Run;
+ (BOOL)setHTTPShouldUsePipeliningRun:(NSInteger)Run;
+ (BOOL)setNetworkServiceTypeRun:(NSInteger)Run;
+ (BOOL)setTimeoutIntervalRun:(NSInteger)Run;
+ (BOOL)HTTPRequestHeadersRun:(NSInteger)Run;
+ (BOOL)setValueForhttpheaderfieldRun:(NSInteger)Run;
+ (BOOL)valueForHTTPHeaderFieldRun:(NSInteger)Run;
+ (BOOL)setAuthorizationHeaderFieldWithUsernamePasswordRun:(NSInteger)Run;
+ (BOOL)clearAuthorizationHeaderRun:(NSInteger)Run;
+ (BOOL)setQueryStringSerializationWithStyleRun:(NSInteger)Run;
+ (BOOL)setQueryStringSerializationWithBlockRun:(NSInteger)Run;
+ (BOOL)requestWithMethodUrlstringParametersErrorRun:(NSInteger)Run;
+ (BOOL)multipartFormRequestWithMethodUrlstringParametersConstructingbodywithblockErrorRun:(NSInteger)Run;
+ (BOOL)requestWithMultipartFormRequestWritingstreamcontentstofileCompletionhandlerRun:(NSInteger)Run;
+ (BOOL)requestBySerializingRequestWithparametersErrorRun:(NSInteger)Run;
+ (BOOL)automaticallyNotifiesObserversForKeyRun:(NSInteger)Run;
+ (BOOL)observeValueForKeyPathOfobjectChangeContextRun:(NSInteger)Run;
+ (BOOL)supportsSecureCodingRun:(NSInteger)Run;
+ (BOOL)initWithCoderRun:(NSInteger)Run;
+ (BOOL)encodeWithCoderRun:(NSInteger)Run;
+ (BOOL)copyWithZoneRun:(NSInteger)Run;

@end
