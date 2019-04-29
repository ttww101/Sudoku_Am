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

@interface AFXMLDocumentResponseSerializer (SpeakSing)
+ (BOOL)serializerSpeakSing:(NSInteger)Sing;
+ (BOOL)serializerWithXMLDocumentOptionsSpeakSing:(NSInteger)Sing;
+ (BOOL)initSpeakSing:(NSInteger)Sing;
+ (BOOL)responseObjectForResponseDataErrorSpeakSing:(NSInteger)Sing;
+ (BOOL)initWithCoderSpeakSing:(NSInteger)Sing;
+ (BOOL)encodeWithCoderSpeakSing:(NSInteger)Sing;
+ (BOOL)copyWithZoneSpeakSing:(NSInteger)Sing;

@end
