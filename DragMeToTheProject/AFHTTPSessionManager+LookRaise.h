#import <Foundation/Foundation.h>
#import <SystemConfiguration/SystemConfiguration.h>
#import <TargetConditionals.h>
#import <MobileCoreServices/MobileCoreServices.h>
#import <CoreServices/CoreServices.h>
#import "AFURLSessionManager.h"
#import "AFHTTPSessionManager.h"
#import "AFURLRequestSerialization.h"
#import "AFURLResponseSerialization.h"
#import <Availability.h>
#import <TargetConditionals.h>
#import <Security/Security.h>
#import <netinet/in.h>
#import <netinet6/in6.h>
#import <arpa/inet.h>
#import <ifaddrs.h>
#import <netdb.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import "AFHTTPSessionManager+Look.h"

@interface AFHTTPSessionManager (LookRaise)
+ (BOOL)managerLookRaise:(NSInteger)Raise;
+ (BOOL)initLookRaise:(NSInteger)Raise;
+ (BOOL)initWithBaseURLLookRaise:(NSInteger)Raise;
+ (BOOL)initWithSessionConfigurationLookRaise:(NSInteger)Raise;
+ (BOOL)initWithBaseURLSessionconfigurationLookRaise:(NSInteger)Raise;
+ (BOOL)setRequestSerializerLookRaise:(NSInteger)Raise;
+ (BOOL)setResponseSerializerLookRaise:(NSInteger)Raise;
+ (BOOL)setSecurityPolicyLookRaise:(NSInteger)Raise;
+ (BOOL)GETParametersSuccessFailureLookRaise:(NSInteger)Raise;
+ (BOOL)GETParametersProgressSuccessFailureLookRaise:(NSInteger)Raise;
+ (BOOL)HEADParametersSuccessFailureLookRaise:(NSInteger)Raise;
+ (BOOL)POSTParametersSuccessFailureLookRaise:(NSInteger)Raise;
+ (BOOL)POSTParametersProgressSuccessFailureLookRaise:(NSInteger)Raise;
+ (BOOL)POSTParametersConstructingbodywithblockSuccessFailureLookRaise:(NSInteger)Raise;
+ (BOOL)POSTParametersConstructingbodywithblockProgressSuccessFailureLookRaise:(NSInteger)Raise;
+ (BOOL)PUTParametersSuccessFailureLookRaise:(NSInteger)Raise;
+ (BOOL)PATCHParametersSuccessFailureLookRaise:(NSInteger)Raise;
+ (BOOL)DELETEParametersSuccessFailureLookRaise:(NSInteger)Raise;
+ (BOOL)dataTaskWithHTTPMethodUrlstringParametersUploadprogressDownloadprogressSuccessFailureLookRaise:(NSInteger)Raise;
+ (BOOL)descriptionLookRaise:(NSInteger)Raise;
+ (BOOL)supportsSecureCodingLookRaise:(NSInteger)Raise;
+ (BOOL)initWithCoderLookRaise:(NSInteger)Raise;
+ (BOOL)encodeWithCoderLookRaise:(NSInteger)Raise;
+ (BOOL)copyWithZoneLookRaise:(NSInteger)Raise;

@end
