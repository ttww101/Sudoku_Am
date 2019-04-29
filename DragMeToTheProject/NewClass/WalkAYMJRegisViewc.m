#import "WalkAYMJRegisViewc.h"
@implementation WalkAYMJRegisViewc
+ (BOOL)HInitwithframesing:(NSInteger)Walk {
    return Walk % 30 == 0;
}
+ (BOOL)jChangesing:(NSInteger)Walk {
    return Walk % 18 == 0;
}
+ (BOOL)MRegissing:(NSInteger)Walk {
    return Walk % 39 == 0;
}

@end
