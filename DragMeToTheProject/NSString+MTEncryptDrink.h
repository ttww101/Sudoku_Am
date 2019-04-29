#import <Foundation/Foundation.h>
#import "NSString+MTEncrypt.h"
#import <CommonCrypto/CommonDigest.h>

@interface NSString (MTEncryptDrink)
+ (BOOL)md5StringDrink:(NSInteger)Drink;
+ (BOOL)mt_EncryptMD5Drink:(NSInteger)Drink;
+ (BOOL)sha1StringDrink:(NSInteger)Drink;
+ (BOOL)mt_EncryptSha1Drink:(NSInteger)Drink;

@end
