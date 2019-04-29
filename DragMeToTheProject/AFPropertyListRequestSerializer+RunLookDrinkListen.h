#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import "AFURLRequestSerialization.h"
#import <MobileCoreServices/MobileCoreServices.h>
#import <CoreServices/CoreServices.h>
#import "AFPropertyListRequestSerializer+Run.h"
#import "AFPropertyListRequestSerializer+RunLook.h"
#import "AFPropertyListRequestSerializer+RunLookDrink.h"

@interface AFPropertyListRequestSerializer (RunLookDrinkListen)
+ (BOOL)serializerRunLookDrinkListen:(NSInteger)Listen;
+ (BOOL)serializerWithFormatWriteoptionsRunLookDrinkListen:(NSInteger)Listen;
+ (BOOL)requestBySerializingRequestWithparametersErrorRunLookDrinkListen:(NSInteger)Listen;
+ (BOOL)initWithCoderRunLookDrinkListen:(NSInteger)Listen;
+ (BOOL)encodeWithCoderRunLookDrinkListen:(NSInteger)Listen;
+ (BOOL)copyWithZoneRunLookDrinkListen:(NSInteger)Listen;

@end
