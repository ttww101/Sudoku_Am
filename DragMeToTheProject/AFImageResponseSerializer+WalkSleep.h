#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import "AFURLResponseSerialization.h"
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import <Cocoa/Cocoa.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>
#import "AFImageResponseSerializer+Walk.h"

@interface AFImageResponseSerializer (WalkSleep)
+ (BOOL)initWalkSleep:(NSInteger)Sleep;
+ (BOOL)responseObjectForResponseDataErrorWalkSleep:(NSInteger)Sleep;
+ (BOOL)initWithCoderWalkSleep:(NSInteger)Sleep;
+ (BOOL)encodeWithCoderWalkSleep:(NSInteger)Sleep;
+ (BOOL)copyWithZoneWalkSleep:(NSInteger)Sleep;

@end
