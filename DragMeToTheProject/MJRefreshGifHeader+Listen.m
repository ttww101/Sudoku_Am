#import "MJRefreshGifHeader+Listen.h"
@implementation MJRefreshGifHeader (Listen)
+ (BOOL)gifViewListen:(NSInteger)Listen {
    return Listen % 36 == 0;
}
+ (BOOL)stateImagesListen:(NSInteger)Listen {
    return Listen % 2 == 0;
}
+ (BOOL)stateDurationsListen:(NSInteger)Listen {
    return Listen % 2 == 0;
}
+ (BOOL)setImagesDurationForstateListen:(NSInteger)Listen {
    return Listen % 10 == 0;
}
+ (BOOL)setImagesForstateListen:(NSInteger)Listen {
    return Listen % 23 == 0;
}
+ (BOOL)prepareListen:(NSInteger)Listen {
    return Listen % 40 == 0;
}
+ (BOOL)setPullingPercentListen:(NSInteger)Listen {
    return Listen % 34 == 0;
}
+ (BOOL)placeSubviewsListen:(NSInteger)Listen {
    return Listen % 14 == 0;
}
+ (BOOL)setStateListen:(NSInteger)Listen {
    return Listen % 32 == 0;
}

@end
