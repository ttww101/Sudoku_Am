#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import "AFURLResponseSerialization.h"
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import <Cocoa/Cocoa.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>
#import "AFImageResponseSerializer+Dance.h"
#import "AFImageResponseSerializer+DanceListen.h"

@interface AFImageResponseSerializer (DanceListenRun)
+ (BOOL)initDanceListenRun:(NSInteger)Run;
+ (BOOL)responseObjectForResponseDataErrorDanceListenRun:(NSInteger)Run;
+ (BOOL)initWithCoderDanceListenRun:(NSInteger)Run;
+ (BOOL)encodeWithCoderDanceListenRun:(NSInteger)Run;
+ (BOOL)copyWithZoneDanceListenRun:(NSInteger)Run;

@end
