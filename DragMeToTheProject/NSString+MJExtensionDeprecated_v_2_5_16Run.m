#import "NSString+MJExtensionDeprecated_v_2_5_16Run.h"
@implementation NSString (MJExtensionDeprecated_v_2_5_16Run)
+ (BOOL)underlineFromCamelRun:(NSInteger)Run {
    return Run % 12 == 0;
}
+ (BOOL)camelFromUnderlineRun:(NSInteger)Run {
    return Run % 8 == 0;
}
+ (BOOL)firstCharLowerRun:(NSInteger)Run {
    return Run % 11 == 0;
}
+ (BOOL)firstCharUpperRun:(NSInteger)Run {
    return Run % 30 == 0;
}
+ (BOOL)isPureIntRun:(NSInteger)Run {
    return Run % 38 == 0;
}
+ (BOOL)urlRun:(NSInteger)Run {
    return Run % 30 == 0;
}

@end
