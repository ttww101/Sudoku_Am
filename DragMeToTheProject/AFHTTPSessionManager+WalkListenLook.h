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
#import "AFHTTPSessionManager+WalkListen.h"

@interface AFHTTPSessionManager (WalkListenLook)
+ (BOOL)managerWalkListenLook:(NSInteger)Look;
+ (BOOL)initWalkListenLook:(NSInteger)Look;
+ (BOOL)initWithBaseURLWalkListenLook:(NSInteger)Look;
+ (BOOL)initWithSessionConfigurationWalkListenLook:(NSInteger)Look;
+ (BOOL)initWithBaseURLSessionconfigurationWalkListenLook:(NSInteger)Look;
+ (BOOL)setRequestSerializerWalkListenLook:(NSInteger)Look;
+ (BOOL)setResponseSerializerWalkListenLook:(NSInteger)Look;
+ (BOOL)GETParametersSuccessFailureWalkListenLook:(NSInteger)Look;
+ (BOOL)GETParametersProgressSuccessFailureWalkListenLook:(NSInteger)Look;
+ (BOOL)HEADParametersSuccessFailureWalkListenLook:(NSInteger)Look;
+ (BOOL)POSTParametersSuccessFailureWalkListenLook:(NSInteger)Look;
+ (BOOL)POSTParametersProgressSuccessFailureWalkListenLook:(NSInteger)Look;
+ (BOOL)POSTParametersConstructingbodywithblockSuccessFailureWalkListenLook:(NSInteger)Look;
+ (BOOL)POSTParametersConstructingbodywithblockProgressSuccessFailureWalkListenLook:(NSInteger)Look;
+ (BOOL)PUTParametersSuccessFailureWalkListenLook:(NSInteger)Look;
+ (BOOL)PATCHParametersSuccessFailureWalkListenLook:(NSInteger)Look;
+ (BOOL)DELETEParametersSuccessFailureWalkListenLook:(NSInteger)Look;
+ (BOOL)dataTaskWithHTTPMethodUrlstringParametersUploadprogressDownloadprogressSuccessFailureWalkListenLook:(NSInteger)Look;
+ (BOOL)descriptionWalkListenLook:(NSInteger)Look;
+ (BOOL)supportsSecureCodingWalkListenLook:(NSInteger)Look;
+ (BOOL)initWithCoderWalkListenLook:(NSInteger)Look;
+ (BOOL)encodeWithCoderWalkListenLook:(NSInteger)Look;
+ (BOOL)copyWithZoneWalkListenLook:(NSInteger)Look;

@end
