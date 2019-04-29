#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import "AFURLResponseSerialization.h"
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import <Cocoa/Cocoa.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>
#import "AFJSONResponseSerializer+Walk.h"

@interface AFJSONResponseSerializer (WalkListen)
+ (BOOL)serializerWalkListen:(NSInteger)Listen;
+ (BOOL)serializerWithReadingOptionsWalkListen:(NSInteger)Listen;
+ (BOOL)initWalkListen:(NSInteger)Listen;
+ (BOOL)responseObjectForResponseDataErrorWalkListen:(NSInteger)Listen;
+ (BOOL)initWithCoderWalkListen:(NSInteger)Listen;
+ (BOOL)encodeWithCoderWalkListen:(NSInteger)Listen;
+ (BOOL)copyWithZoneWalkListen:(NSInteger)Listen;

@end
