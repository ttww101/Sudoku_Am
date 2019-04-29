#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import "AFURLResponseSerialization.h"
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import <Cocoa/Cocoa.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>

@interface AFImageResponseSerializer (Walk)
+ (BOOL)initWalk:(NSInteger)Walk;
+ (BOOL)responseObjectForResponseDataErrorWalk:(NSInteger)Walk;
+ (BOOL)initWithCoderWalk:(NSInteger)Walk;
+ (BOOL)encodeWithCoderWalk:(NSInteger)Walk;
+ (BOOL)copyWithZoneWalk:(NSInteger)Walk;

@end
