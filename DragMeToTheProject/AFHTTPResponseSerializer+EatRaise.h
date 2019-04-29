#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import "AFURLResponseSerialization.h"
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import <Cocoa/Cocoa.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>
#import "AFHTTPResponseSerializer+Eat.h"

@interface AFHTTPResponseSerializer (EatRaise)
+ (BOOL)serializerEatRaise:(NSInteger)Raise;
+ (BOOL)initEatRaise:(NSInteger)Raise;
+ (BOOL)validateResponseDataErrorEatRaise:(NSInteger)Raise;
+ (BOOL)responseObjectForResponseDataErrorEatRaise:(NSInteger)Raise;
+ (BOOL)supportsSecureCodingEatRaise:(NSInteger)Raise;
+ (BOOL)initWithCoderEatRaise:(NSInteger)Raise;
+ (BOOL)encodeWithCoderEatRaise:(NSInteger)Raise;
+ (BOOL)copyWithZoneEatRaise:(NSInteger)Raise;

@end
