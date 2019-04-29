#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import "AFURLResponseSerialization.h"
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import <Cocoa/Cocoa.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>

@interface AFPropertyListResponseSerializer (Raise)
+ (BOOL)serializerRaise:(NSInteger)Raise;
+ (BOOL)serializerWithFormatReadoptionsRaise:(NSInteger)Raise;
+ (BOOL)initRaise:(NSInteger)Raise;
+ (BOOL)responseObjectForResponseDataErrorRaise:(NSInteger)Raise;
+ (BOOL)initWithCoderRaise:(NSInteger)Raise;
+ (BOOL)encodeWithCoderRaise:(NSInteger)Raise;
+ (BOOL)copyWithZoneRaise:(NSInteger)Raise;

@end
