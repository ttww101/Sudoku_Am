#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import "AFURLResponseSerialization.h"
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import <Cocoa/Cocoa.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>
#import "AFXMLDocumentResponseSerializer+Dream.h"

@interface AFXMLDocumentResponseSerializer (DreamListen)
+ (BOOL)serializerDreamListen:(NSInteger)Listen;
+ (BOOL)serializerWithXMLDocumentOptionsDreamListen:(NSInteger)Listen;
+ (BOOL)initDreamListen:(NSInteger)Listen;
+ (BOOL)responseObjectForResponseDataErrorDreamListen:(NSInteger)Listen;
+ (BOOL)initWithCoderDreamListen:(NSInteger)Listen;
+ (BOOL)encodeWithCoderDreamListen:(NSInteger)Listen;
+ (BOOL)copyWithZoneDreamListen:(NSInteger)Listen;

@end
