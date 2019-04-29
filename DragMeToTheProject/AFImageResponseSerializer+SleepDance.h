#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import "AFURLResponseSerialization.h"
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import <Cocoa/Cocoa.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>
#import "AFImageResponseSerializer+Sleep.h"

@interface AFImageResponseSerializer (SleepDance)
+ (BOOL)initSleepDance:(NSInteger)Dance;
+ (BOOL)responseObjectForResponseDataErrorSleepDance:(NSInteger)Dance;
+ (BOOL)initWithCoderSleepDance:(NSInteger)Dance;
+ (BOOL)encodeWithCoderSleepDance:(NSInteger)Dance;
+ (BOOL)copyWithZoneSleepDance:(NSInteger)Dance;

@end
