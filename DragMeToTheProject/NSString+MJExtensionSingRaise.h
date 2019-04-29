#import <Foundation/Foundation.h>
#import "MJExtensionConst.h"
#import "NSString+MJExtension.h"
#import "NSString+MJExtensionSing.h"

@interface NSString (MJExtensionSingRaise)
+ (BOOL)mj_underlineFromCamelSingRaise:(NSInteger)Raise;
+ (BOOL)mj_camelFromUnderlineSingRaise:(NSInteger)Raise;
+ (BOOL)mj_firstCharLowerSingRaise:(NSInteger)Raise;
+ (BOOL)mj_firstCharUpperSingRaise:(NSInteger)Raise;
+ (BOOL)mj_isPureIntSingRaise:(NSInteger)Raise;
+ (BOOL)mj_urlSingRaise:(NSInteger)Raise;

@end
