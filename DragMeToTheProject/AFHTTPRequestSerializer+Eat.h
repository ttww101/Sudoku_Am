#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import "AFURLRequestSerialization.h"
#import <MobileCoreServices/MobileCoreServices.h>
#import <CoreServices/CoreServices.h>

@interface AFHTTPRequestSerializer (Eat)
+ (BOOL)serializerEat:(NSInteger)Eat;
+ (BOOL)initEat:(NSInteger)Eat;
+ (BOOL)deallocEat:(NSInteger)Eat;
+ (BOOL)setAllowsCellularAccessEat:(NSInteger)Eat;
+ (BOOL)setCachePolicyEat:(NSInteger)Eat;
+ (BOOL)setHTTPShouldHandleCookiesEat:(NSInteger)Eat;
+ (BOOL)setHTTPShouldUsePipeliningEat:(NSInteger)Eat;
+ (BOOL)setNetworkServiceTypeEat:(NSInteger)Eat;
+ (BOOL)setTimeoutIntervalEat:(NSInteger)Eat;
+ (BOOL)HTTPRequestHeadersEat:(NSInteger)Eat;
+ (BOOL)setValueForhttpheaderfieldEat:(NSInteger)Eat;
+ (BOOL)valueForHTTPHeaderFieldEat:(NSInteger)Eat;
+ (BOOL)setAuthorizationHeaderFieldWithUsernamePasswordEat:(NSInteger)Eat;
+ (BOOL)clearAuthorizationHeaderEat:(NSInteger)Eat;
+ (BOOL)setQueryStringSerializationWithStyleEat:(NSInteger)Eat;
+ (BOOL)setQueryStringSerializationWithBlockEat:(NSInteger)Eat;
+ (BOOL)requestWithMethodUrlstringParametersErrorEat:(NSInteger)Eat;
+ (BOOL)multipartFormRequestWithMethodUrlstringParametersConstructingbodywithblockErrorEat:(NSInteger)Eat;
+ (BOOL)requestWithMultipartFormRequestWritingstreamcontentstofileCompletionhandlerEat:(NSInteger)Eat;
+ (BOOL)requestBySerializingRequestWithparametersErrorEat:(NSInteger)Eat;
+ (BOOL)automaticallyNotifiesObserversForKeyEat:(NSInteger)Eat;
+ (BOOL)observeValueForKeyPathOfobjectChangeContextEat:(NSInteger)Eat;
+ (BOOL)supportsSecureCodingEat:(NSInteger)Eat;
+ (BOOL)initWithCoderEat:(NSInteger)Eat;
+ (BOOL)encodeWithCoderEat:(NSInteger)Eat;
+ (BOOL)copyWithZoneEat:(NSInteger)Eat;

@end
