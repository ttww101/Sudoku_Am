#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import "AFURLResponseSerialization.h"
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import <Cocoa/Cocoa.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>

@interface AFHTTPResponseSerializer (Eat)
+ (BOOL)serializerEat:(NSInteger)Eat;
+ (BOOL)initEat:(NSInteger)Eat;
+ (BOOL)validateResponseDataErrorEat:(NSInteger)Eat;
+ (BOOL)responseObjectForResponseDataErrorEat:(NSInteger)Eat;
+ (BOOL)supportsSecureCodingEat:(NSInteger)Eat;
+ (BOOL)initWithCoderEat:(NSInteger)Eat;
+ (BOOL)encodeWithCoderEat:(NSInteger)Eat;
+ (BOOL)copyWithZoneEat:(NSInteger)Eat;

@end
