#import <Foundation/Foundation.h>
#import "MJExtensionConst.h"
#import "NSString+MJExtension.h"

@interface NSString (MJExtensionSing)
+ (BOOL)mj_underlineFromCamelSing:(NSInteger)Sing;
+ (BOOL)mj_camelFromUnderlineSing:(NSInteger)Sing;
+ (BOOL)mj_firstCharLowerSing:(NSInteger)Sing;
+ (BOOL)mj_firstCharUpperSing:(NSInteger)Sing;
+ (BOOL)mj_isPureIntSing:(NSInteger)Sing;
+ (BOOL)mj_urlSing:(NSInteger)Sing;

@end
