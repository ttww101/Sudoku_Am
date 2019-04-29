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
#import "AFXMLDocumentResponseSerializer+SpeakListen.h"

@interface AFXMLDocumentResponseSerializer (SpeakListenDream)
+ (BOOL)serializerSpeakListenDream:(NSInteger)Dream;
+ (BOOL)serializerWithXMLDocumentOptionsSpeakListenDream:(NSInteger)Dream;
+ (BOOL)initSpeakListenDream:(NSInteger)Dream;
+ (BOOL)responseObjectForResponseDataErrorSpeakListenDream:(NSInteger)Dream;
+ (BOOL)initWithCoderSpeakListenDream:(NSInteger)Dream;
+ (BOOL)encodeWithCoderSpeakListenDream:(NSInteger)Dream;
+ (BOOL)copyWithZoneSpeakListenDream:(NSInteger)Dream;

@end
