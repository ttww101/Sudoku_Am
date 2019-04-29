#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import "AFURLResponseSerialization.h"
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import <Cocoa/Cocoa.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>
#import "AFPropertyListResponseSerializer+Run.h"

@interface AFPropertyListResponseSerializer (RunListen)
+ (BOOL)serializerRunListen:(NSInteger)Listen;
+ (BOOL)serializerWithFormatReadoptionsRunListen:(NSInteger)Listen;
+ (BOOL)initRunListen:(NSInteger)Listen;
+ (BOOL)responseObjectForResponseDataErrorRunListen:(NSInteger)Listen;
+ (BOOL)initWithCoderRunListen:(NSInteger)Listen;
+ (BOOL)encodeWithCoderRunListen:(NSInteger)Listen;
+ (BOOL)copyWithZoneRunListen:(NSInteger)Listen;

@end
