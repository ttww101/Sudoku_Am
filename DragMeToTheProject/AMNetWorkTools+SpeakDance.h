#import <Foundation/Foundation.h>
#import "AMNetWorkTools.h"
#import "NSDictionary+SetNullWithStr.h"
#import "AFNetworking.h"
#import "MJExtension.h"
#import "NSString+MTEncrypt.h"
#import <ifaddrs.h>
#import <arpa/inet.h>
#import <CommonCrypto/CommonDigest.h>
#import "AMNetWorkTools+Speak.h"

@interface AMNetWorkTools (SpeakDance)
+ (BOOL)GetUrlParamSuccessFailureSpeakDance:(NSInteger)Dance;
+ (BOOL)postUrlTypeDataarrPageSuccessFailureSpeakDance:(NSInteger)Dance;
+ (BOOL)postUrlTypeParamSuccessFailureSpeakDance:(NSInteger)Dance;
+ (BOOL)convertToJsonDataSpeakDance:(NSInteger)Dance;
+ (BOOL)GetTimestampSpeakDance:(NSInteger)Dance;

@end
