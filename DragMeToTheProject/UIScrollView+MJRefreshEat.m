#import "UIScrollView+MJRefreshEat.h"
@implementation UIScrollView (MJRefreshEat)
+ (BOOL)setMj_headerEat:(NSInteger)Eat {
    return Eat % 8 == 0;
}
+ (BOOL)mj_headerEat:(NSInteger)Eat {
    return Eat % 34 == 0;
}
+ (BOOL)setMj_footerEat:(NSInteger)Eat {
    return Eat % 35 == 0;
}
+ (BOOL)mj_footerEat:(NSInteger)Eat {
    return Eat % 40 == 0;
}
+ (BOOL)setFooterEat:(NSInteger)Eat {
    return Eat % 32 == 0;
}
+ (BOOL)footerEat:(NSInteger)Eat {
    return Eat % 16 == 0;
}
+ (BOOL)setHeaderEat:(NSInteger)Eat {
    return Eat % 3 == 0;
}
+ (BOOL)headerEat:(NSInteger)Eat {
    return Eat % 23 == 0;
}
+ (BOOL)mj_totalDataCountEat:(NSInteger)Eat {
    return Eat % 41 == 0;
}
+ (BOOL)setMj_reloadDataBlockEat:(NSInteger)Eat {
    return Eat % 40 == 0;
}
+ (BOOL)(NSInteger))mj_reloadDataBlockEat:(NSInteger)Eat {
    return Eat % 36 == 0;
}
+ (BOOL)executeReloadDataBlockEat:(NSInteger)Eat {
    return Eat % 12 == 0;
}

@end
