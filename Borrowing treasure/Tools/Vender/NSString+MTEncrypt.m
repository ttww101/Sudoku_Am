//
//  NSString+MTEncrypt.m
//  YingCaa
//
//  Created by interest on 16/6/2.
//  Copyright © 2016年 interest. All rights reserved.
//

#import "NSString+MTEncrypt.h"

//md5头文件
#import <CommonCrypto/CommonDigest.h>

@implementation NSString (MTEncrypt)

-(NSString *)md5String{
    return [self mt_EncryptMD5];
}

- (NSString *)mt_EncryptMD5{
   
    
    const char *cStr = self.UTF8String;
    unsigned char digest[CC_MD5_DIGEST_LENGTH];
    
    CC_MD5( cStr, (CC_LONG)strlen(cStr), digest );
    NSMutableString *result = [NSMutableString stringWithCapacity:CC_MD5_DIGEST_LENGTH * 2];
    
    for(int i = 0; i < CC_MD5_DIGEST_LENGTH; i++){
       [result appendFormat:@"%02x", digest[i]];
    }
    
    return result;
}

-(NSString *)sha1String{
    return [self mt_EncryptSha1];
}

- (NSString*)mt_EncryptSha1{
    const char *cstr = [self cStringUsingEncoding:NSUTF8StringEncoding];
    
    NSData *data = [NSData dataWithBytes:cstr length:self.length];
    //使用对应的CC_SHA1,CC_SHA256,CC_SHA384,CC_SHA512的长度分别是20,32,48,64
    uint8_t digest[CC_SHA1_DIGEST_LENGTH];
    //使用对应的CC_SHA256,CC_SHA384,CC_SHA512
    CC_SHA1(data.bytes, (CC_LONG)data.length, digest);
    
    NSMutableString* output = [NSMutableString stringWithCapacity:CC_SHA1_DIGEST_LENGTH * 2];
    
    for(int i = 0; i < CC_SHA1_DIGEST_LENGTH; i++)
        [output appendFormat:@"%02x", digest[i]];
    
    return output;
}
@end
