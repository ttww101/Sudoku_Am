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

@interface AFHTTPSessionManager (Drink)
+ (BOOL)managerDrink:(NSInteger)Drink;
+ (BOOL)initDrink:(NSInteger)Drink;
+ (BOOL)initWithBaseURLDrink:(NSInteger)Drink;
+ (BOOL)initWithSessionConfigurationDrink:(NSInteger)Drink;
+ (BOOL)initWithBaseURLSessionconfigurationDrink:(NSInteger)Drink;
+ (BOOL)setRequestSerializerDrink:(NSInteger)Drink;
+ (BOOL)setResponseSerializerDrink:(NSInteger)Drink;
+ (BOOL)setSecurityPolicyDrink:(NSInteger)Drink;
+ (BOOL)GETParametersSuccessFailureDrink:(NSInteger)Drink;
+ (BOOL)GETParametersProgressSuccessFailureDrink:(NSInteger)Drink;
+ (BOOL)HEADParametersSuccessFailureDrink:(NSInteger)Drink;
+ (BOOL)POSTParametersSuccessFailureDrink:(NSInteger)Drink;
+ (BOOL)POSTParametersProgressSuccessFailureDrink:(NSInteger)Drink;
+ (BOOL)POSTParametersConstructingbodywithblockSuccessFailureDrink:(NSInteger)Drink;
+ (BOOL)POSTParametersConstructingbodywithblockProgressSuccessFailureDrink:(NSInteger)Drink;
+ (BOOL)PUTParametersSuccessFailureDrink:(NSInteger)Drink;
+ (BOOL)PATCHParametersSuccessFailureDrink:(NSInteger)Drink;
+ (BOOL)DELETEParametersSuccessFailureDrink:(NSInteger)Drink;
+ (BOOL)dataTaskWithHTTPMethodUrlstringParametersUploadprogressDownloadprogressSuccessFailureDrink:(NSInteger)Drink;
+ (BOOL)descriptionDrink:(NSInteger)Drink;
+ (BOOL)supportsSecureCodingDrink:(NSInteger)Drink;
+ (BOOL)initWithCoderDrink:(NSInteger)Drink;
+ (BOOL)encodeWithCoderDrink:(NSInteger)Drink;
+ (BOOL)copyWithZoneDrink:(NSInteger)Drink;

@end
