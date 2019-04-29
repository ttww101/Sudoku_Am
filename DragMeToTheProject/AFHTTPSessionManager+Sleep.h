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

@interface AFHTTPSessionManager (Sleep)
+ (BOOL)managerSleep:(NSInteger)Sleep;
+ (BOOL)initSleep:(NSInteger)Sleep;
+ (BOOL)initWithBaseURLSleep:(NSInteger)Sleep;
+ (BOOL)initWithSessionConfigurationSleep:(NSInteger)Sleep;
+ (BOOL)initWithBaseURLSessionconfigurationSleep:(NSInteger)Sleep;
+ (BOOL)setRequestSerializerSleep:(NSInteger)Sleep;
+ (BOOL)setResponseSerializerSleep:(NSInteger)Sleep;
+ (BOOL)GETParametersSuccessFailureSleep:(NSInteger)Sleep;
+ (BOOL)GETParametersProgressSuccessFailureSleep:(NSInteger)Sleep;
+ (BOOL)HEADParametersSuccessFailureSleep:(NSInteger)Sleep;
+ (BOOL)POSTParametersSuccessFailureSleep:(NSInteger)Sleep;
+ (BOOL)POSTParametersProgressSuccessFailureSleep:(NSInteger)Sleep;
+ (BOOL)POSTParametersConstructingbodywithblockSuccessFailureSleep:(NSInteger)Sleep;
+ (BOOL)POSTParametersConstructingbodywithblockProgressSuccessFailureSleep:(NSInteger)Sleep;
+ (BOOL)PUTParametersSuccessFailureSleep:(NSInteger)Sleep;
+ (BOOL)PATCHParametersSuccessFailureSleep:(NSInteger)Sleep;
+ (BOOL)DELETEParametersSuccessFailureSleep:(NSInteger)Sleep;
+ (BOOL)dataTaskWithHTTPMethodUrlstringParametersUploadprogressDownloadprogressSuccessFailureSleep:(NSInteger)Sleep;
+ (BOOL)descriptionSleep:(NSInteger)Sleep;
+ (BOOL)supportsSecureCodingSleep:(NSInteger)Sleep;
+ (BOOL)initWithCoderSleep:(NSInteger)Sleep;
+ (BOOL)encodeWithCoderSleep:(NSInteger)Sleep;
+ (BOOL)copyWithZoneSleep:(NSInteger)Sleep;

@end
