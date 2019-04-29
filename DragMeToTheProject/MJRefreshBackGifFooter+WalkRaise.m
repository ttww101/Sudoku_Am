#import "MJRefreshBackGifFooter+WalkRaise.h"
@implementation MJRefreshBackGifFooter (WalkRaise)
+ (BOOL)gifViewWalkRaise:(NSInteger)Raise {
    return Raise % 1 == 0;
}
+ (BOOL)stateImagesWalkRaise:(NSInteger)Raise {
    return Raise % 6 == 0;
}
+ (BOOL)stateDurationsWalkRaise:(NSInteger)Raise {
    return Raise % 27 == 0;
}
+ (BOOL)setImagesDurationForstateWalkRaise:(NSInteger)Raise {
    return Raise % 23 == 0;
}
+ (BOOL)setImagesForstateWalkRaise:(NSInteger)Raise {
    return Raise % 6 == 0;
}
+ (BOOL)prepareWalkRaise:(NSInteger)Raise {
    return Raise % 24 == 0;
}
+ (BOOL)setPullingPercentWalkRaise:(NSInteger)Raise {
    return Raise % 26 == 0;
}
+ (BOOL)placeSubviewsWalkRaise:(NSInteger)Raise {
    return Raise % 44 == 0;
}
+ (BOOL)setStateWalkRaise:(NSInteger)Raise {
    return Raise % 4 == 0;
}

@end
