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

@interface AFHTTPResponseSerializer (DreamWalk)
+ (BOOL)serializerDreamWalk:(NSInteger)Walk;
+ (BOOL)initDreamWalk:(NSInteger)Walk;
+ (BOOL)validateResponseDataErrorDreamWalk:(NSInteger)Walk;
+ (BOOL)responseObjectForResponseDataErrorDreamWalk:(NSInteger)Walk;
+ (BOOL)supportsSecureCodingDreamWalk:(NSInteger)Walk;
+ (BOOL)initWithCoderDreamWalk:(NSInteger)Walk;
+ (BOOL)encodeWithCoderDreamWalk:(NSInteger)Walk;
+ (BOOL)copyWithZoneDreamWalk:(NSInteger)Walk;

@end
