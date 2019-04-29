#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import "AFURLRequestSerialization.h"
#import <MobileCoreServices/MobileCoreServices.h>
#import <CoreServices/CoreServices.h>
#import "AFJSONRequestSerializer+Walk.h"

@interface AFJSONRequestSerializer (WalkRun)
+ (BOOL)serializerWalkRun:(NSInteger)Run;
+ (BOOL)serializerWithWritingOptionsWalkRun:(NSInteger)Run;
+ (BOOL)requestBySerializingRequestWithparametersErrorWalkRun:(NSInteger)Run;
+ (BOOL)initWithCoderWalkRun:(NSInteger)Run;
+ (BOOL)encodeWithCoderWalkRun:(NSInteger)Run;
+ (BOOL)copyWithZoneWalkRun:(NSInteger)Run;

@end
