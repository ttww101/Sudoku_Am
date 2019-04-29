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

@interface AFHTTPResponseSerializer (WalkSing)
+ (BOOL)serializerWalkSing:(NSInteger)Sing;
+ (BOOL)initWalkSing:(NSInteger)Sing;
+ (BOOL)validateResponseDataErrorWalkSing:(NSInteger)Sing;
+ (BOOL)responseObjectForResponseDataErrorWalkSing:(NSInteger)Sing;
+ (BOOL)supportsSecureCodingWalkSing:(NSInteger)Sing;
+ (BOOL)initWithCoderWalkSing:(NSInteger)Sing;
+ (BOOL)encodeWithCoderWalkSing:(NSInteger)Sing;
+ (BOOL)copyWithZoneWalkSing:(NSInteger)Sing;

@end
