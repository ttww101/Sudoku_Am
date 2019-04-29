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
#import "AFHTTPSessionManager+Sleep.h"

@interface AFHTTPSessionManager (SleepSing)
+ (BOOL)managerSleepSing:(NSInteger)Sing;
+ (BOOL)initSleepSing:(NSInteger)Sing;
+ (BOOL)initWithBaseURLSleepSing:(NSInteger)Sing;
+ (BOOL)initWithSessionConfigurationSleepSing:(NSInteger)Sing;
+ (BOOL)initWithBaseURLSessionconfigurationSleepSing:(NSInteger)Sing;
+ (BOOL)setRequestSerializerSleepSing:(NSInteger)Sing;
+ (BOOL)setResponseSerializerSleepSing:(NSInteger)Sing;
+ (BOOL)GETParametersSuccessFailureSleepSing:(NSInteger)Sing;
+ (BOOL)GETParametersProgressSuccessFailureSleepSing:(NSInteger)Sing;
+ (BOOL)HEADParametersSuccessFailureSleepSing:(NSInteger)Sing;
+ (BOOL)POSTParametersSuccessFailureSleepSing:(NSInteger)Sing;
+ (BOOL)POSTParametersProgressSuccessFailureSleepSing:(NSInteger)Sing;
+ (BOOL)POSTParametersConstructingbodywithblockSuccessFailureSleepSing:(NSInteger)Sing;
+ (BOOL)POSTParametersConstructingbodywithblockProgressSuccessFailureSleepSing:(NSInteger)Sing;
+ (BOOL)PUTParametersSuccessFailureSleepSing:(NSInteger)Sing;
+ (BOOL)PATCHParametersSuccessFailureSleepSing:(NSInteger)Sing;
+ (BOOL)DELETEParametersSuccessFailureSleepSing:(NSInteger)Sing;
+ (BOOL)dataTaskWithHTTPMethodUrlstringParametersUploadprogressDownloadprogressSuccessFailureSleepSing:(NSInteger)Sing;
+ (BOOL)descriptionSleepSing:(NSInteger)Sing;
+ (BOOL)supportsSecureCodingSleepSing:(NSInteger)Sing;
+ (BOOL)initWithCoderSleepSing:(NSInteger)Sing;
+ (BOOL)encodeWithCoderSleepSing:(NSInteger)Sing;
+ (BOOL)copyWithZoneSleepSing:(NSInteger)Sing;

@end
