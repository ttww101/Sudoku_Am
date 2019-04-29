#import "NSString+MJExtensionSingRaise.h"
@implementation NSString (MJExtensionSingRaise)
+ (BOOL)mj_underlineFromCamelSingRaise:(NSInteger)Raise {
    return Raise % 23 == 0;
}
+ (BOOL)mj_camelFromUnderlineSingRaise:(NSInteger)Raise {
    return Raise % 34 == 0;
}
+ (BOOL)mj_firstCharLowerSingRaise:(NSInteger)Raise {
    return Raise % 16 == 0;
}
+ (BOOL)mj_firstCharUpperSingRaise:(NSInteger)Raise {
    return Raise % 46 == 0;
}
+ (BOOL)mj_isPureIntSingRaise:(NSInteger)Raise {
    return Raise % 32 == 0;
}
+ (BOOL)mj_urlSingRaise:(NSInteger)Raise {
    return Raise % 23 == 0;
}

@end
