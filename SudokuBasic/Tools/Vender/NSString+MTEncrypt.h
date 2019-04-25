//
//  NSString+MTEncrypt.h
//  YingCaa
//
//  Created by interest on 16/6/2.
//  Copyright © 2016年 interest. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (MTEncrypt)

/**
 *  md5加密
 */
@property (nonatomic, copy, readonly) NSString *md5String;
- (NSString *)mt_EncryptMD5;
@property (nonatomic, copy, readonly) NSString *sha1String;
- (NSString*)mt_EncryptSha1;
@end
