#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import "AFURLResponseSerialization.h"
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import <Cocoa/Cocoa.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>
#import "AFXMLParserResponseSerializer+Look.h"

@interface AFXMLParserResponseSerializer (LookRun)
+ (BOOL)serializerLookRun:(NSInteger)Run;
+ (BOOL)initLookRun:(NSInteger)Run;
+ (BOOL)responseObjectForResponseDataErrorLookRun:(NSInteger)Run;

@end
