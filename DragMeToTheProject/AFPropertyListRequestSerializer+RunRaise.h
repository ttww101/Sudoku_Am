#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import "AFURLRequestSerialization.h"
#import <MobileCoreServices/MobileCoreServices.h>
#import <CoreServices/CoreServices.h>
#import "AFPropertyListRequestSerializer+Run.h"

@interface AFPropertyListRequestSerializer (RunRaise)
+ (BOOL)serializerRunRaise:(NSInteger)Raise;
+ (BOOL)serializerWithFormatWriteoptionsRunRaise:(NSInteger)Raise;
+ (BOOL)requestBySerializingRequestWithparametersErrorRunRaise:(NSInteger)Raise;
+ (BOOL)initWithCoderRunRaise:(NSInteger)Raise;
+ (BOOL)encodeWithCoderRunRaise:(NSInteger)Raise;
+ (BOOL)copyWithZoneRunRaise:(NSInteger)Raise;

@end
