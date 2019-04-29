#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import "AFURLRequestSerialization.h"
#import <MobileCoreServices/MobileCoreServices.h>
#import <CoreServices/CoreServices.h>
#import "AFPropertyListRequestSerializer+Eat.h"

@interface AFPropertyListRequestSerializer (EatDrink)
+ (BOOL)serializerEatDrink:(NSInteger)Drink;
+ (BOOL)serializerWithFormatWriteoptionsEatDrink:(NSInteger)Drink;
+ (BOOL)requestBySerializingRequestWithparametersErrorEatDrink:(NSInteger)Drink;
+ (BOOL)initWithCoderEatDrink:(NSInteger)Drink;
+ (BOOL)encodeWithCoderEatDrink:(NSInteger)Drink;
+ (BOOL)copyWithZoneEatDrink:(NSInteger)Drink;

@end
