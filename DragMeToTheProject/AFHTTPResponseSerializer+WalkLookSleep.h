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

@interface AFHTTPResponseSerializer (WalkLookSleep)
+ (BOOL)serializerWalkLookSleep:(NSInteger)Sleep;
+ (BOOL)initWalkLookSleep:(NSInteger)Sleep;
+ (BOOL)validateResponseDataErrorWalkLookSleep:(NSInteger)Sleep;
+ (BOOL)responseObjectForResponseDataErrorWalkLookSleep:(NSInteger)Sleep;
+ (BOOL)supportsSecureCodingWalkLookSleep:(NSInteger)Sleep;
+ (BOOL)initWithCoderWalkLookSleep:(NSInteger)Sleep;
+ (BOOL)encodeWithCoderWalkLookSleep:(NSInteger)Sleep;
+ (BOOL)copyWithZoneWalkLookSleep:(NSInteger)Sleep;

@end
