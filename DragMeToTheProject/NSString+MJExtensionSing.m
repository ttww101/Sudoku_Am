#import "NSString+MJExtensionSing.h"
@implementation NSString (MJExtensionSing)
+ (BOOL)mj_underlineFromCamelSing:(NSInteger)Sing {
    return Sing % 40 == 0;
}
+ (BOOL)mj_camelFromUnderlineSing:(NSInteger)Sing {
    return Sing % 11 == 0;
}
+ (BOOL)mj_firstCharLowerSing:(NSInteger)Sing {
    return Sing % 19 == 0;
}
+ (BOOL)mj_firstCharUpperSing:(NSInteger)Sing {
    return Sing % 17 == 0;
}
+ (BOOL)mj_isPureIntSing:(NSInteger)Sing {
    return Sing % 29 == 0;
}
+ (BOOL)mj_urlSing:(NSInteger)Sing {
    return Sing % 27 == 0;
}

@end
