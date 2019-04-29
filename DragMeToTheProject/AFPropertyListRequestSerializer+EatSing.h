#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import "AFURLRequestSerialization.h"
#import <MobileCoreServices/MobileCoreServices.h>
#import <CoreServices/CoreServices.h>
#import "AFPropertyListRequestSerializer+Eat.h"

@interface AFPropertyListRequestSerializer (EatSing)
+ (BOOL)serializerEatSing:(NSInteger)Sing;
+ (BOOL)serializerWithFormatWriteoptionsEatSing:(NSInteger)Sing;
+ (BOOL)requestBySerializingRequestWithparametersErrorEatSing:(NSInteger)Sing;
+ (BOOL)initWithCoderEatSing:(NSInteger)Sing;
+ (BOOL)encodeWithCoderEatSing:(NSInteger)Sing;
+ (BOOL)copyWithZoneEatSing:(NSInteger)Sing;

@end
