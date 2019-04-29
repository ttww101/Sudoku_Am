#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import "AFURLResponseSerialization.h"
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <WatchKit/WatchKit.h>
#import <Cocoa/Cocoa.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>
#import "AFXMLDocumentResponseSerializer+Speak.h"
#import "AFXMLDocumentResponseSerializer+SpeakSing.h"

@interface AFXMLDocumentResponseSerializer (SpeakSingSing)
+ (BOOL)serializerSpeakSingSing:(NSInteger)Sing;
+ (BOOL)serializerWithXMLDocumentOptionsSpeakSingSing:(NSInteger)Sing;
+ (BOOL)initSpeakSingSing:(NSInteger)Sing;
+ (BOOL)responseObjectForResponseDataErrorSpeakSingSing:(NSInteger)Sing;
+ (BOOL)initWithCoderSpeakSingSing:(NSInteger)Sing;
+ (BOOL)encodeWithCoderSpeakSingSing:(NSInteger)Sing;
+ (BOOL)copyWithZoneSpeakSingSing:(NSInteger)Sing;

@end
