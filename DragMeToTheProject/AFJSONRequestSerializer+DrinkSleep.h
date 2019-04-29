#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import "AFURLRequestSerialization.h"
#import <MobileCoreServices/MobileCoreServices.h>
#import <CoreServices/CoreServices.h>
#import "AFJSONRequestSerializer+Drink.h"

@interface AFJSONRequestSerializer (DrinkSleep)
+ (BOOL)serializerDrinkSleep:(NSInteger)Sleep;
+ (BOOL)serializerWithWritingOptionsDrinkSleep:(NSInteger)Sleep;
+ (BOOL)requestBySerializingRequestWithparametersErrorDrinkSleep:(NSInteger)Sleep;
+ (BOOL)initWithCoderDrinkSleep:(NSInteger)Sleep;
+ (BOOL)encodeWithCoderDrinkSleep:(NSInteger)Sleep;
+ (BOOL)copyWithZoneDrinkSleep:(NSInteger)Sleep;

@end
