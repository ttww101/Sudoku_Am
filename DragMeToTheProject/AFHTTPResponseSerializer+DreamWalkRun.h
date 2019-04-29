#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import "AFURLResponseSerialization.h"
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import <Cocoa/Cocoa.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>
#import "AFHTTPResponseSerializer+Dream.h"
#import "AFHTTPResponseSerializer+DreamWalk.h"

@interface AFHTTPResponseSerializer (DreamWalkRun)
+ (BOOL)serializerDreamWalkRun:(NSInteger)Run;
+ (BOOL)initDreamWalkRun:(NSInteger)Run;
+ (BOOL)validateResponseDataErrorDreamWalkRun:(NSInteger)Run;
+ (BOOL)responseObjectForResponseDataErrorDreamWalkRun:(NSInteger)Run;
+ (BOOL)supportsSecureCodingDreamWalkRun:(NSInteger)Run;
+ (BOOL)initWithCoderDreamWalkRun:(NSInteger)Run;
+ (BOOL)encodeWithCoderDreamWalkRun:(NSInteger)Run;
+ (BOOL)copyWithZoneDreamWalkRun:(NSInteger)Run;

@end
