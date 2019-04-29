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
#import "AFImageResponseSerializer+DanceListenRun.h"

@interface AFImageResponseSerializer (DanceListenRunLook)
+ (BOOL)initDanceListenRunLook:(NSInteger)Look;
+ (BOOL)responseObjectForResponseDataErrorDanceListenRunLook:(NSInteger)Look;
+ (BOOL)initWithCoderDanceListenRunLook:(NSInteger)Look;
+ (BOOL)encodeWithCoderDanceListenRunLook:(NSInteger)Look;
+ (BOOL)copyWithZoneDanceListenRunLook:(NSInteger)Look;

@end
