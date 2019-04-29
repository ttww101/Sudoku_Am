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
#import "AFHTTPSessionManager+Walk.h"

@interface AFHTTPSessionManager (WalkLook)
+ (BOOL)managerWalkLook:(NSInteger)Look;
+ (BOOL)initWalkLook:(NSInteger)Look;
+ (BOOL)initWithBaseURLWalkLook:(NSInteger)Look;
+ (BOOL)initWithSessionConfigurationWalkLook:(NSInteger)Look;
+ (BOOL)initWithBaseURLSessionconfigurationWalkLook:(NSInteger)Look;
+ (BOOL)setRequestSerializerWalkLook:(NSInteger)Look;
+ (BOOL)setResponseSerializerWalkLook:(NSInteger)Look;
+ (BOOL)GETParametersSuccessFailureWalkLook:(NSInteger)Look;
+ (BOOL)GETParametersProgressSuccessFailureWalkLook:(NSInteger)Look;
+ (BOOL)HEADParametersSuccessFailureWalkLook:(NSInteger)Look;
+ (BOOL)POSTParametersSuccessFailureWalkLook:(NSInteger)Look;
+ (BOOL)POSTParametersProgressSuccessFailureWalkLook:(NSInteger)Look;
+ (BOOL)POSTParametersConstructingbodywithblockSuccessFailureWalkLook:(NSInteger)Look;
+ (BOOL)POSTParametersConstructingbodywithblockProgressSuccessFailureWalkLook:(NSInteger)Look;
+ (BOOL)PUTParametersSuccessFailureWalkLook:(NSInteger)Look;
+ (BOOL)PATCHParametersSuccessFailureWalkLook:(NSInteger)Look;
+ (BOOL)DELETEParametersSuccessFailureWalkLook:(NSInteger)Look;
+ (BOOL)dataTaskWithHTTPMethodUrlstringParametersUploadprogressDownloadprogressSuccessFailureWalkLook:(NSInteger)Look;
+ (BOOL)descriptionWalkLook:(NSInteger)Look;
+ (BOOL)supportsSecureCodingWalkLook:(NSInteger)Look;
+ (BOOL)initWithCoderWalkLook:(NSInteger)Look;
+ (BOOL)encodeWithCoderWalkLook:(NSInteger)Look;
+ (BOOL)copyWithZoneWalkLook:(NSInteger)Look;

@end
