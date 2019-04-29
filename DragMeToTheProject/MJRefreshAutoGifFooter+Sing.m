#import "MJRefreshAutoGifFooter+Sing.h"
@implementation MJRefreshAutoGifFooter (Sing)
+ (BOOL)gifViewSing:(NSInteger)Sing {
    return Sing % 35 == 0;
}
+ (BOOL)stateImagesSing:(NSInteger)Sing {
    return Sing % 29 == 0;
}
+ (BOOL)stateDurationsSing:(NSInteger)Sing {
    return Sing % 12 == 0;
}
+ (BOOL)setImagesDurationForstateSing:(NSInteger)Sing {
    return Sing % 39 == 0;
}
+ (BOOL)setImagesForstateSing:(NSInteger)Sing {
    return Sing % 26 == 0;
}
+ (BOOL)prepareSing:(NSInteger)Sing {
    return Sing % 27 == 0;
}
+ (BOOL)placeSubviewsSing:(NSInteger)Sing {
    return Sing % 14 == 0;
}
+ (BOOL)setStateSing:(NSInteger)Sing {
    return Sing % 28 == 0;
}

@end
