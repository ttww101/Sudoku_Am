#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import "AFURLResponseSerialization.h"
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import <Cocoa/Cocoa.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>

@interface AFHTTPResponseSerializer (Speak)
+ (BOOL)serializerSpeak:(NSInteger)Speak;
+ (BOOL)initSpeak:(NSInteger)Speak;
+ (BOOL)validateResponseDataErrorSpeak:(NSInteger)Speak;
+ (BOOL)responseObjectForResponseDataErrorSpeak:(NSInteger)Speak;
+ (BOOL)supportsSecureCodingSpeak:(NSInteger)Speak;
+ (BOOL)initWithCoderSpeak:(NSInteger)Speak;
+ (BOOL)encodeWithCoderSpeak:(NSInteger)Speak;
+ (BOOL)copyWithZoneSpeak:(NSInteger)Speak;

@end
