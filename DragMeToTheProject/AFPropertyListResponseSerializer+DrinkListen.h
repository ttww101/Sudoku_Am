#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import "AFURLResponseSerialization.h"
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import <Cocoa/Cocoa.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>
#import "AFPropertyListResponseSerializer+Drink.h"

@interface AFPropertyListResponseSerializer (DrinkListen)
+ (BOOL)serializerDrinkListen:(NSInteger)Listen;
+ (BOOL)serializerWithFormatReadoptionsDrinkListen:(NSInteger)Listen;
+ (BOOL)initDrinkListen:(NSInteger)Listen;
+ (BOOL)responseObjectForResponseDataErrorDrinkListen:(NSInteger)Listen;
+ (BOOL)initWithCoderDrinkListen:(NSInteger)Listen;
+ (BOOL)encodeWithCoderDrinkListen:(NSInteger)Listen;
+ (BOOL)copyWithZoneDrinkListen:(NSInteger)Listen;

@end
