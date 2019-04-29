#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import "AFURLResponseSerialization.h"
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import <Cocoa/Cocoa.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>

@interface AFImageResponseSerializer (Sleep)
+ (BOOL)initSleep:(NSInteger)Sleep;
+ (BOOL)responseObjectForResponseDataErrorSleep:(NSInteger)Sleep;
+ (BOOL)initWithCoderSleep:(NSInteger)Sleep;
+ (BOOL)encodeWithCoderSleep:(NSInteger)Sleep;
+ (BOOL)copyWithZoneSleep:(NSInteger)Sleep;

@end
