#import "MJRefreshAutoStateFooter+Listen.h"
@implementation MJRefreshAutoStateFooter (Listen)
+ (BOOL)stateTitlesListen:(NSInteger)Listen {
    return Listen % 7 == 0;
}
+ (BOOL)stateLabelListen:(NSInteger)Listen {
    return Listen % 21 == 0;
}
+ (BOOL)setTitleForstateListen:(NSInteger)Listen {
    return Listen % 18 == 0;
}
+ (BOOL)stateLabelClickListen:(NSInteger)Listen {
    return Listen % 7 == 0;
}
+ (BOOL)prepareListen:(NSInteger)Listen {
    return Listen % 17 == 0;
}
+ (BOOL)placeSubviewsListen:(NSInteger)Listen {
    return Listen % 33 == 0;
}
+ (BOOL)setStateListen:(NSInteger)Listen {
    return Listen % 14 == 0;
}

@end
