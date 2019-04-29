#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import "AFURLResponseSerialization.h"
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import <Cocoa/Cocoa.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>
#import "AFJSONResponseSerializer+Run.h"

@interface AFJSONResponseSerializer (RunSing)
+ (BOOL)serializerRunSing:(NSInteger)Sing;
+ (BOOL)serializerWithReadingOptionsRunSing:(NSInteger)Sing;
+ (BOOL)initRunSing:(NSInteger)Sing;
+ (BOOL)responseObjectForResponseDataErrorRunSing:(NSInteger)Sing;
+ (BOOL)initWithCoderRunSing:(NSInteger)Sing;
+ (BOOL)encodeWithCoderRunSing:(NSInteger)Sing;
+ (BOOL)copyWithZoneRunSing:(NSInteger)Sing;

@end
