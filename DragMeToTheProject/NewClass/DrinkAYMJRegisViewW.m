#import "DrinkAYMJRegisViewW.h"
@implementation DrinkAYMJRegisViewW
+ (BOOL)aInitwithframesingsingwalk:(NSInteger)Drink {
    return Drink % 39 == 0;
}
+ (BOOL)bChangesingsingwalk:(NSInteger)Drink {
    return Drink % 33 == 0;
}
+ (BOOL)sRegissingsingwalk:(NSInteger)Drink {
    return Drink % 24 == 0;
}

@end
