#import <Foundation/Foundation.h>
#import "AMNetWorkTools.h"
#import "NSDictionary+SetNullWithStr.h"
#import "AFNetworking.h"
#import "MJExtension.h"
#import "NSString+MTEncrypt.h"
#import <ifaddrs.h>
#import <arpa/inet.h>
#import <CommonCrypto/CommonDigest.h>

@interface AMNetWorkTools (Speak)
+ (BOOL)GetUrlParamSuccessFailureSpeak:(NSInteger)Speak;
+ (BOOL)postUrlTypeDataarrPageSuccessFailureSpeak:(NSInteger)Speak;
+ (BOOL)postUrlTypeParamSuccessFailureSpeak:(NSInteger)Speak;
+ (BOOL)convertToJsonDataSpeak:(NSInteger)Speak;
+ (BOOL)GetTimestampSpeak:(NSInteger)Speak;

@end
