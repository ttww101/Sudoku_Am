#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import "AFURLResponseSerialization.h"
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import <Cocoa/Cocoa.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>

@interface AFJSONResponseSerializer (Run)
+ (BOOL)serializerRun:(NSInteger)Run;
+ (BOOL)serializerWithReadingOptionsRun:(NSInteger)Run;
+ (BOOL)initRun:(NSInteger)Run;
+ (BOOL)responseObjectForResponseDataErrorRun:(NSInteger)Run;
+ (BOOL)initWithCoderRun:(NSInteger)Run;
+ (BOOL)encodeWithCoderRun:(NSInteger)Run;
+ (BOOL)copyWithZoneRun:(NSInteger)Run;

@end
