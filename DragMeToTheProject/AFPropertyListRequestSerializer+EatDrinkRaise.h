#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import "AFURLRequestSerialization.h"
#import <MobileCoreServices/MobileCoreServices.h>
#import <CoreServices/CoreServices.h>
#import "AFPropertyListRequestSerializer+Eat.h"
#import "AFPropertyListRequestSerializer+EatDrink.h"

@interface AFPropertyListRequestSerializer (EatDrinkRaise)
+ (BOOL)serializerEatDrinkRaise:(NSInteger)Raise;
+ (BOOL)serializerWithFormatWriteoptionsEatDrinkRaise:(NSInteger)Raise;
+ (BOOL)requestBySerializingRequestWithparametersErrorEatDrinkRaise:(NSInteger)Raise;
+ (BOOL)initWithCoderEatDrinkRaise:(NSInteger)Raise;
+ (BOOL)encodeWithCoderEatDrinkRaise:(NSInteger)Raise;
+ (BOOL)copyWithZoneEatDrinkRaise:(NSInteger)Raise;

@end
