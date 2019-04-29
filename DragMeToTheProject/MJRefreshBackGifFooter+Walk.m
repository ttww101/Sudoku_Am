#import "MJRefreshBackGifFooter+Walk.h"
@implementation MJRefreshBackGifFooter (Walk)
+ (BOOL)gifViewWalk:(NSInteger)Walk {
    return Walk % 50 == 0;
}
+ (BOOL)stateImagesWalk:(NSInteger)Walk {
    return Walk % 37 == 0;
}
+ (BOOL)stateDurationsWalk:(NSInteger)Walk {
    return Walk % 31 == 0;
}
+ (BOOL)setImagesDurationForstateWalk:(NSInteger)Walk {
    return Walk % 19 == 0;
}
+ (BOOL)setImagesForstateWalk:(NSInteger)Walk {
    return Walk % 14 == 0;
}
+ (BOOL)prepareWalk:(NSInteger)Walk {
    return Walk % 33 == 0;
}
+ (BOOL)setPullingPercentWalk:(NSInteger)Walk {
    return Walk % 42 == 0;
}
+ (BOOL)placeSubviewsWalk:(NSInteger)Walk {
    return Walk % 41 == 0;
}
+ (BOOL)setStateWalk:(NSInteger)Walk {
    return Walk % 24 == 0;
}

@end
