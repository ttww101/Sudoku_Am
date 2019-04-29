#import "MJRefreshBackStateFooter+Sleep.h"
@implementation MJRefreshBackStateFooter (Sleep)
+ (BOOL)stateTitlesSleep:(NSInteger)Sleep {
    return Sleep % 10 == 0;
}
+ (BOOL)stateLabelSleep:(NSInteger)Sleep {
    return Sleep % 6 == 0;
}
+ (BOOL)setTitleForstateSleep:(NSInteger)Sleep {
    return Sleep % 5 == 0;
}
+ (BOOL)titleForStateSleep:(NSInteger)Sleep {
    return Sleep % 22 == 0;
}
+ (BOOL)prepareSleep:(NSInteger)Sleep {
    return Sleep % 26 == 0;
}
+ (BOOL)placeSubviewsSleep:(NSInteger)Sleep {
    return Sleep % 4 == 0;
}
+ (BOOL)setStateSleep:(NSInteger)Sleep {
    return Sleep % 12 == 0;
}

@end
