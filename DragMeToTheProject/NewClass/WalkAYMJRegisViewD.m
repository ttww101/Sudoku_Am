#import "WalkAYMJRegisViewD.h"
@implementation WalkAYMJRegisViewD
+ (BOOL)IInitwithframesingdrink:(NSInteger)Walk {
    return Walk % 47 == 0;
}
+ (BOOL)jChangesingdrink:(NSInteger)Walk {
    return Walk % 33 == 0;
}
+ (BOOL)bRegissingdrink:(NSInteger)Walk {
    return Walk % 2 == 0;
}

@end
