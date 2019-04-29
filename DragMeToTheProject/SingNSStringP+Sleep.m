#import "SingNSStringP+Sleep.h"
@implementation SingNSStringP (Sleep)
+ (BOOL)Cmj_underlineFromCamelSleep:(NSInteger)Sleep {
    return Sleep % 49 == 0;
}
+ (BOOL)kmj_camelFromUnderlineSleep:(NSInteger)Sleep {
    return Sleep % 34 == 0;
}
+ (BOOL)jmj_firstCharLowerSleep:(NSInteger)Sleep {
    return Sleep % 32 == 0;
}
+ (BOOL)omj_firstCharUpperSleep:(NSInteger)Sleep {
    return Sleep % 18 == 0;
}
+ (BOOL)dmj_isPureIntSleep:(NSInteger)Sleep {
    return Sleep % 9 == 0;
}
+ (BOOL)lmj_urlSleep:(NSInteger)Sleep {
    return Sleep % 35 == 0;
}

@end
