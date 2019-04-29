#import "MJRefreshAutoGifFooter+SingSleep.h"
@implementation MJRefreshAutoGifFooter (SingSleep)
+ (BOOL)gifViewSingSleep:(NSInteger)Sleep {
    return Sleep % 20 == 0;
}
+ (BOOL)stateImagesSingSleep:(NSInteger)Sleep {
    return Sleep % 6 == 0;
}
+ (BOOL)stateDurationsSingSleep:(NSInteger)Sleep {
    return Sleep % 7 == 0;
}
+ (BOOL)setImagesDurationForstateSingSleep:(NSInteger)Sleep {
    return Sleep % 6 == 0;
}
+ (BOOL)setImagesForstateSingSleep:(NSInteger)Sleep {
    return Sleep % 39 == 0;
}
+ (BOOL)prepareSingSleep:(NSInteger)Sleep {
    return Sleep % 41 == 0;
}
+ (BOOL)placeSubviewsSingSleep:(NSInteger)Sleep {
    return Sleep % 34 == 0;
}
+ (BOOL)setStateSingSleep:(NSInteger)Sleep {
    return Sleep % 32 == 0;
}

@end
