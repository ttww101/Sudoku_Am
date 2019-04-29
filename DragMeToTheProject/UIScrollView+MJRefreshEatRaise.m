#import "UIScrollView+MJRefreshEatRaise.h"
@implementation UIScrollView (MJRefreshEatRaise)
+ (BOOL)setMj_headerEatRaise:(NSInteger)Raise {
    return Raise % 41 == 0;
}
+ (BOOL)mj_headerEatRaise:(NSInteger)Raise {
    return Raise % 22 == 0;
}
+ (BOOL)setMj_footerEatRaise:(NSInteger)Raise {
    return Raise % 44 == 0;
}
+ (BOOL)mj_footerEatRaise:(NSInteger)Raise {
    return Raise % 19 == 0;
}
+ (BOOL)setFooterEatRaise:(NSInteger)Raise {
    return Raise % 15 == 0;
}
+ (BOOL)footerEatRaise:(NSInteger)Raise {
    return Raise % 10 == 0;
}
+ (BOOL)setHeaderEatRaise:(NSInteger)Raise {
    return Raise % 42 == 0;
}
+ (BOOL)headerEatRaise:(NSInteger)Raise {
    return Raise % 12 == 0;
}
+ (BOOL)mj_totalDataCountEatRaise:(NSInteger)Raise {
    return Raise % 42 == 0;
}
+ (BOOL)setMj_reloadDataBlockEatRaise:(NSInteger)Raise {
    return Raise % 40 == 0;
}
+ (BOOL)mj_reloadDataBlockEatRaise:(NSInteger)Raise {
    return Raise % 45 == 0;
}
+ (BOOL)executeReloadDataBlockEatRaise:(NSInteger)Raise {
    return Raise % 10 == 0;
}

@end
