#import "DrinkAYMJRegisViewd+Dance.h"
@implementation DrinkAYMJRegisViewd (Dance)
+ (BOOL)mInitwithframesingDance:(NSInteger)Dance {
    return Dance % 19 == 0;
}
+ (BOOL)KChangesingDance:(NSInteger)Dance {
    return Dance % 9 == 0;
}
+ (BOOL)ORegissingDance:(NSInteger)Dance {
    return Dance % 14 == 0;
}

@end
