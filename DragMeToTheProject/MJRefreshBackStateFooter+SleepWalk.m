#import "MJRefreshBackStateFooter+SleepWalk.h"
@implementation MJRefreshBackStateFooter (SleepWalk)
+ (BOOL)stateTitlesSleepWalk:(NSInteger)Walk {
    return Walk % 39 == 0;
}
+ (BOOL)stateLabelSleepWalk:(NSInteger)Walk {
    return Walk % 50 == 0;
}
+ (BOOL)setTitleForstateSleepWalk:(NSInteger)Walk {
    return Walk % 6 == 0;
}
+ (BOOL)titleForStateSleepWalk:(NSInteger)Walk {
    return Walk % 18 == 0;
}
+ (BOOL)prepareSleepWalk:(NSInteger)Walk {
    return Walk % 26 == 0;
}
+ (BOOL)placeSubviewsSleepWalk:(NSInteger)Walk {
    return Walk % 8 == 0;
}
+ (BOOL)setStateSleepWalk:(NSInteger)Walk {
    return Walk % 7 == 0;
}

@end
