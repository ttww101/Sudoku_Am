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
#import "AFPropertyListResponseSerializer+RunSpeakLook.h"

@interface AFPropertyListResponseSerializer (RunSpeakLookSing)
+ (BOOL)serializerRunSpeakLookSing:(NSInteger)Sing;
+ (BOOL)serializerWithFormatReadoptionsRunSpeakLookSing:(NSInteger)Sing;
+ (BOOL)initRunSpeakLookSing:(NSInteger)Sing;
+ (BOOL)responseObjectForResponseDataErrorRunSpeakLookSing:(NSInteger)Sing;
+ (BOOL)initWithCoderRunSpeakLookSing:(NSInteger)Sing;
+ (BOOL)encodeWithCoderRunSpeakLookSing:(NSInteger)Sing;
+ (BOOL)copyWithZoneRunSpeakLookSing:(NSInteger)Sing;

@end
