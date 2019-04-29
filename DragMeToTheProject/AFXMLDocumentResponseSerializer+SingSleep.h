#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import "AFURLResponseSerialization.h"
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import <Cocoa/Cocoa.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>
#import "AFXMLDocumentResponseSerializer+Sing.h"

@interface AFXMLDocumentResponseSerializer (SingSleep)
+ (BOOL)serializerSingSleep:(NSInteger)Sleep;
+ (BOOL)serializerWithXMLDocumentOptionsSingSleep:(NSInteger)Sleep;
+ (BOOL)initSingSleep:(NSInteger)Sleep;
+ (BOOL)responseObjectForResponseDataErrorSingSleep:(NSInteger)Sleep;
+ (BOOL)initWithCoderSingSleep:(NSInteger)Sleep;
+ (BOOL)encodeWithCoderSingSleep:(NSInteger)Sleep;
+ (BOOL)copyWithZoneSingSleep:(NSInteger)Sleep;

@end
