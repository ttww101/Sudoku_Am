#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import "AFURLRequestSerialization.h"
#import <MobileCoreServices/MobileCoreServices.h>
#import <CoreServices/CoreServices.h>
#import "AFHTTPRequestSerializer+Sing.h"

@interface AFHTTPRequestSerializer (SingRaise)
+ (BOOL)serializerSingRaise:(NSInteger)Raise;
+ (BOOL)initSingRaise:(NSInteger)Raise;
+ (BOOL)deallocSingRaise:(NSInteger)Raise;
+ (BOOL)setAllowsCellularAccessSingRaise:(NSInteger)Raise;
+ (BOOL)setCachePolicySingRaise:(NSInteger)Raise;
+ (BOOL)setHTTPShouldHandleCookiesSingRaise:(NSInteger)Raise;
+ (BOOL)setHTTPShouldUsePipeliningSingRaise:(NSInteger)Raise;
+ (BOOL)setNetworkServiceTypeSingRaise:(NSInteger)Raise;
+ (BOOL)setTimeoutIntervalSingRaise:(NSInteger)Raise;
+ (BOOL)HTTPRequestHeadersSingRaise:(NSInteger)Raise;
+ (BOOL)setValueForhttpheaderfieldSingRaise:(NSInteger)Raise;
+ (BOOL)valueForHTTPHeaderFieldSingRaise:(NSInteger)Raise;
+ (BOOL)setAuthorizationHeaderFieldWithUsernamePasswordSingRaise:(NSInteger)Raise;
+ (BOOL)clearAuthorizationHeaderSingRaise:(NSInteger)Raise;
+ (BOOL)setQueryStringSerializationWithStyleSingRaise:(NSInteger)Raise;
+ (BOOL)setQueryStringSerializationWithBlockSingRaise:(NSInteger)Raise;
+ (BOOL)requestWithMethodUrlstringParametersErrorSingRaise:(NSInteger)Raise;
+ (BOOL)multipartFormRequestWithMethodUrlstringParametersConstructingbodywithblockErrorSingRaise:(NSInteger)Raise;
+ (BOOL)requestWithMultipartFormRequestWritingstreamcontentstofileCompletionhandlerSingRaise:(NSInteger)Raise;
+ (BOOL)requestBySerializingRequestWithparametersErrorSingRaise:(NSInteger)Raise;
+ (BOOL)automaticallyNotifiesObserversForKeySingRaise:(NSInteger)Raise;
+ (BOOL)observeValueForKeyPathOfobjectChangeContextSingRaise:(NSInteger)Raise;
+ (BOOL)supportsSecureCodingSingRaise:(NSInteger)Raise;
+ (BOOL)initWithCoderSingRaise:(NSInteger)Raise;
+ (BOOL)encodeWithCoderSingRaise:(NSInteger)Raise;
+ (BOOL)copyWithZoneSingRaise:(NSInteger)Raise;

@end
