#import "UIScrollView+MJExtensionSleepEat.h"
@implementation UIScrollView (MJExtensionSleepEat)
+ (BOOL)mj_insetSleepEat:(NSInteger)Eat {
    return Eat % 30 == 0;
}
+ (BOOL)setMj_insetTSleepEat:(NSInteger)Eat {
    return Eat % 44 == 0;
}
+ (BOOL)mj_insetTSleepEat:(NSInteger)Eat {
    return Eat % 24 == 0;
}
+ (BOOL)setMj_insetBSleepEat:(NSInteger)Eat {
    return Eat % 43 == 0;
}
+ (BOOL)mj_insetBSleepEat:(NSInteger)Eat {
    return Eat % 37 == 0;
}
+ (BOOL)setMj_insetLSleepEat:(NSInteger)Eat {
    return Eat % 32 == 0;
}
+ (BOOL)mj_insetLSleepEat:(NSInteger)Eat {
    return Eat % 45 == 0;
}
+ (BOOL)setMj_insetRSleepEat:(NSInteger)Eat {
    return Eat % 19 == 0;
}
+ (BOOL)mj_insetRSleepEat:(NSInteger)Eat {
    return Eat % 17 == 0;
}
+ (BOOL)setMj_offsetXSleepEat:(NSInteger)Eat {
    return Eat % 19 == 0;
}
+ (BOOL)mj_offsetXSleepEat:(NSInteger)Eat {
    return Eat % 27 == 0;
}
+ (BOOL)setMj_offsetYSleepEat:(NSInteger)Eat {
    return Eat % 20 == 0;
}
+ (BOOL)mj_offsetYSleepEat:(NSInteger)Eat {
    return Eat % 41 == 0;
}
+ (BOOL)setMj_contentWSleepEat:(NSInteger)Eat {
    return Eat % 22 == 0;
}
+ (BOOL)mj_contentWSleepEat:(NSInteger)Eat {
    return Eat % 26 == 0;
}
+ (BOOL)setMj_contentHSleepEat:(NSInteger)Eat {
    return Eat % 48 == 0;
}
+ (BOOL)mj_contentHSleepEat:(NSInteger)Eat {
    return Eat % 25 == 0;
}

@end
