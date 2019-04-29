#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import "AFURLResponseSerialization.h"
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import <Cocoa/Cocoa.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>
#import "AFJSONResponseSerializer+Dance.h"

@interface AFJSONResponseSerializer (DanceSpeak)
+ (BOOL)serializerDanceSpeak:(NSInteger)Speak;
+ (BOOL)serializerWithReadingOptionsDanceSpeak:(NSInteger)Speak;
+ (BOOL)initDanceSpeak:(NSInteger)Speak;
+ (BOOL)responseObjectForResponseDataErrorDanceSpeak:(NSInteger)Speak;
+ (BOOL)initWithCoderDanceSpeak:(NSInteger)Speak;
+ (BOOL)encodeWithCoderDanceSpeak:(NSInteger)Speak;
+ (BOOL)copyWithZoneDanceSpeak:(NSInteger)Speak;

@end
