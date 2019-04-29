#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import "AFURLResponseSerialization.h"
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import <Cocoa/Cocoa.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>
#import "AFPropertyListResponseSerializer+Run.h"
#import "AFPropertyListResponseSerializer+RunSpeak.h"

@interface AFPropertyListResponseSerializer (RunSpeakLook)
+ (BOOL)serializerRunSpeakLook:(NSInteger)Look;
+ (BOOL)serializerWithFormatReadoptionsRunSpeakLook:(NSInteger)Look;
+ (BOOL)initRunSpeakLook:(NSInteger)Look;
+ (BOOL)responseObjectForResponseDataErrorRunSpeakLook:(NSInteger)Look;
+ (BOOL)initWithCoderRunSpeakLook:(NSInteger)Look;
+ (BOOL)encodeWithCoderRunSpeakLook:(NSInteger)Look;
+ (BOOL)copyWithZoneRunSpeakLook:(NSInteger)Look;

@end
