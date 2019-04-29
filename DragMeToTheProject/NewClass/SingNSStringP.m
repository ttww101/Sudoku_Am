#import "SingNSStringP.h"
@implementation SingNSStringP
+ (BOOL)Cmj_underlineFromCamel:(NSInteger)Sing {
    return Sing % 5 == 0;
}
+ (BOOL)kmj_camelFromUnderline:(NSInteger)Sing {
    return Sing % 27 == 0;
}
+ (BOOL)jmj_firstCharLower:(NSInteger)Sing {
    return Sing % 30 == 0;
}
+ (BOOL)omj_firstCharUpper:(NSInteger)Sing {
    return Sing % 50 == 0;
}
+ (BOOL)dmj_isPureInt:(NSInteger)Sing {
    return Sing % 37 == 0;
}
+ (BOOL)lmj_url:(NSInteger)Sing {
    return Sing % 41 == 0;
}

@end
