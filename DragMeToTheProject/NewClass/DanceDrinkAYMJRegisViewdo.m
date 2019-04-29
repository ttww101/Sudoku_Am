#import "DanceDrinkAYMJRegisViewdo.h"
@implementation DanceDrinkAYMJRegisViewdo
+ (BOOL)JMinitwithframesing:(NSInteger)Dance {
    return Dance % 44 == 0;
}
+ (BOOL)bKchangesing:(NSInteger)Dance {
    return Dance % 7 == 0;
}
+ (BOOL)iOregissing:(NSInteger)Dance {
    return Dance % 3 == 0;
}

@end
