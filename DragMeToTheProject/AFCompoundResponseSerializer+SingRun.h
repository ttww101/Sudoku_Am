#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import "AFURLResponseSerialization.h"
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import <Cocoa/Cocoa.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>
#import "AFCompoundResponseSerializer+Sing.h"

@interface AFCompoundResponseSerializer (SingRun)
+ (BOOL)compoundSerializerWithResponseSerializersSingRun:(NSInteger)Run;
+ (BOOL)responseObjectForResponseDataErrorSingRun:(NSInteger)Run;
+ (BOOL)initWithCoderSingRun:(NSInteger)Run;
+ (BOOL)encodeWithCoderSingRun:(NSInteger)Run;
+ (BOOL)copyWithZoneSingRun:(NSInteger)Run;

@end
