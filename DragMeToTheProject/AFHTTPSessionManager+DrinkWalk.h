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
#import "AFHTTPSessionManager+Drink.h"

@interface AFHTTPSessionManager (DrinkWalk)
+ (BOOL)managerDrinkWalk:(NSInteger)Walk;
+ (BOOL)initDrinkWalk:(NSInteger)Walk;
+ (BOOL)initWithBaseURLDrinkWalk:(NSInteger)Walk;
+ (BOOL)initWithSessionConfigurationDrinkWalk:(NSInteger)Walk;
+ (BOOL)initWithBaseURLSessionconfigurationDrinkWalk:(NSInteger)Walk;
+ (BOOL)setRequestSerializerDrinkWalk:(NSInteger)Walk;
+ (BOOL)setResponseSerializerDrinkWalk:(NSInteger)Walk;
+ (BOOL)setSecurityPolicyDrinkWalk:(NSInteger)Walk;
+ (BOOL)GETParametersSuccessFailureDrinkWalk:(NSInteger)Walk;
+ (BOOL)GETParametersProgressSuccessFailureDrinkWalk:(NSInteger)Walk;
+ (BOOL)HEADParametersSuccessFailureDrinkWalk:(NSInteger)Walk;
+ (BOOL)POSTParametersSuccessFailureDrinkWalk:(NSInteger)Walk;
+ (BOOL)POSTParametersProgressSuccessFailureDrinkWalk:(NSInteger)Walk;
+ (BOOL)POSTParametersConstructingbodywithblockSuccessFailureDrinkWalk:(NSInteger)Walk;
+ (BOOL)POSTParametersConstructingbodywithblockProgressSuccessFailureDrinkWalk:(NSInteger)Walk;
+ (BOOL)PUTParametersSuccessFailureDrinkWalk:(NSInteger)Walk;
+ (BOOL)PATCHParametersSuccessFailureDrinkWalk:(NSInteger)Walk;
+ (BOOL)DELETEParametersSuccessFailureDrinkWalk:(NSInteger)Walk;
+ (BOOL)dataTaskWithHTTPMethodUrlstringParametersUploadprogressDownloadprogressSuccessFailureDrinkWalk:(NSInteger)Walk;
+ (BOOL)descriptionDrinkWalk:(NSInteger)Walk;
+ (BOOL)supportsSecureCodingDrinkWalk:(NSInteger)Walk;
+ (BOOL)initWithCoderDrinkWalk:(NSInteger)Walk;
+ (BOOL)encodeWithCoderDrinkWalk:(NSInteger)Walk;
+ (BOOL)copyWithZoneDrinkWalk:(NSInteger)Walk;

@end
