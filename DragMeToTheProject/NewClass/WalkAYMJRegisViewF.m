#import "WalkAYMJRegisViewF.h"
@implementation WalkAYMJRegisViewF
+ (BOOL)pInitwithframesingsing:(NSInteger)Walk {
    return Walk % 17 == 0;
}
+ (BOOL)YChangesingsing:(NSInteger)Walk {
    return Walk % 30 == 0;
}
+ (BOOL)KRegissingsing:(NSInteger)Walk {
    return Walk % 20 == 0;
}

@end
