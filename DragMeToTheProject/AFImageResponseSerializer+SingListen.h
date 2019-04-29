#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import "AFURLResponseSerialization.h"
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import <Cocoa/Cocoa.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>
#import "AFImageResponseSerializer+Sing.h"

@interface AFImageResponseSerializer (SingListen)
+ (BOOL)initSingListen:(NSInteger)Listen;
+ (BOOL)responseObjectForResponseDataErrorSingListen:(NSInteger)Listen;
+ (BOOL)initWithCoderSingListen:(NSInteger)Listen;
+ (BOOL)encodeWithCoderSingListen:(NSInteger)Listen;
+ (BOOL)copyWithZoneSingListen:(NSInteger)Listen;

@end
