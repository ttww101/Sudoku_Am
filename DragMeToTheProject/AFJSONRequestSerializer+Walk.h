#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import "AFURLRequestSerialization.h"
#import <MobileCoreServices/MobileCoreServices.h>
#import <CoreServices/CoreServices.h>

@interface AFJSONRequestSerializer (Walk)
+ (BOOL)serializerWalk:(NSInteger)Walk;
+ (BOOL)serializerWithWritingOptionsWalk:(NSInteger)Walk;
+ (BOOL)requestBySerializingRequestWithparametersErrorWalk:(NSInteger)Walk;
+ (BOOL)initWithCoderWalk:(NSInteger)Walk;
+ (BOOL)encodeWithCoderWalk:(NSInteger)Walk;
+ (BOOL)copyWithZoneWalk:(NSInteger)Walk;

@end
