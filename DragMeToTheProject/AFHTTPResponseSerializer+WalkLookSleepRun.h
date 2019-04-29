#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import "AFURLResponseSerialization.h"
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import <Cocoa/Cocoa.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>
#import "AFHTTPResponseSerializer+Walk.h"
#import "AFHTTPResponseSerializer+WalkLook.h"
#import "AFHTTPResponseSerializer+WalkLookSleep.h"

@interface AFHTTPResponseSerializer (WalkLookSleepRun)
+ (BOOL)serializerWalkLookSleepRun:(NSInteger)Run;
+ (BOOL)initWalkLookSleepRun:(NSInteger)Run;
+ (BOOL)validateResponseDataErrorWalkLookSleepRun:(NSInteger)Run;
+ (BOOL)responseObjectForResponseDataErrorWalkLookSleepRun:(NSInteger)Run;
+ (BOOL)supportsSecureCodingWalkLookSleepRun:(NSInteger)Run;
+ (BOOL)initWithCoderWalkLookSleepRun:(NSInteger)Run;
+ (BOOL)encodeWithCoderWalkLookSleepRun:(NSInteger)Run;
+ (BOOL)copyWithZoneWalkLookSleepRun:(NSInteger)Run;

@end
