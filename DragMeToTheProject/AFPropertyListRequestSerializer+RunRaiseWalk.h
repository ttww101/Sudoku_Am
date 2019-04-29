#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import "AFURLRequestSerialization.h"
#import <MobileCoreServices/MobileCoreServices.h>
#import <CoreServices/CoreServices.h>
#import "AFPropertyListRequestSerializer+Run.h"
#import "AFPropertyListRequestSerializer+RunRaise.h"

@interface AFPropertyListRequestSerializer (RunRaiseWalk)
+ (BOOL)serializerRunRaiseWalk:(NSInteger)Walk;
+ (BOOL)serializerWithFormatWriteoptionsRunRaiseWalk:(NSInteger)Walk;
+ (BOOL)requestBySerializingRequestWithparametersErrorRunRaiseWalk:(NSInteger)Walk;
+ (BOOL)initWithCoderRunRaiseWalk:(NSInteger)Walk;
+ (BOOL)encodeWithCoderRunRaiseWalk:(NSInteger)Walk;
+ (BOOL)copyWithZoneRunRaiseWalk:(NSInteger)Walk;

@end
