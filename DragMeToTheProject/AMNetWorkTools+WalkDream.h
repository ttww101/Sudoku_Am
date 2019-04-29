#import <Foundation/Foundation.h>
#import "AMNetWorkTools.h"
#import "NSDictionary+SetNullWithStr.h"
#import "AFNetworking.h"
#import "MJExtension.h"
#import "NSString+MTEncrypt.h"
#import <ifaddrs.h>
#import <arpa/inet.h>
#import <CommonCrypto/CommonDigest.h>
#import "AMNetWorkTools+Walk.h"

@interface AMNetWorkTools (WalkDream)
+ (BOOL)GetUrlParamSuccessFailureWalkDream:(NSInteger)Dream;
+ (BOOL)postUrlTypeDataarrPageSuccessFailureWalkDream:(NSInteger)Dream;
+ (BOOL)postUrlTypeParamSuccessFailureWalkDream:(NSInteger)Dream;
+ (BOOL)convertToJsonDataWalkDream:(NSInteger)Dream;
+ (BOOL)GetTimestampWalkDream:(NSInteger)Dream;

@end
