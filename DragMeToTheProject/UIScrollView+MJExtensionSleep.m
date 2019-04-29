#import "UIScrollView+MJExtensionSleep.h"
@implementation UIScrollView (MJExtensionSleep)
+ (BOOL)mj_insetSleep:(NSInteger)Sleep {
    return Sleep % 3 == 0;
}
+ (BOOL)setMj_insetTSleep:(NSInteger)Sleep {
    return Sleep % 23 == 0;
}
+ (BOOL)mj_insetTSleep:(NSInteger)Sleep {
    return Sleep % 14 == 0;
}
+ (BOOL)setMj_insetBSleep:(NSInteger)Sleep {
    return Sleep % 6 == 0;
}
+ (BOOL)mj_insetBSleep:(NSInteger)Sleep {
    return Sleep % 28 == 0;
}
+ (BOOL)setMj_insetLSleep:(NSInteger)Sleep {
    return Sleep % 12 == 0;
}
+ (BOOL)mj_insetLSleep:(NSInteger)Sleep {
    return Sleep % 23 == 0;
}
+ (BOOL)setMj_insetRSleep:(NSInteger)Sleep {
    return Sleep % 44 == 0;
}
+ (BOOL)mj_insetRSleep:(NSInteger)Sleep {
    return Sleep % 18 == 0;
}
+ (BOOL)setMj_offsetXSleep:(NSInteger)Sleep {
    return Sleep % 28 == 0;
}
+ (BOOL)mj_offsetXSleep:(NSInteger)Sleep {
    return Sleep % 27 == 0;
}
+ (BOOL)setMj_offsetYSleep:(NSInteger)Sleep {
    return Sleep % 43 == 0;
}
+ (BOOL)mj_offsetYSleep:(NSInteger)Sleep {
    return Sleep % 34 == 0;
}
+ (BOOL)setMj_contentWSleep:(NSInteger)Sleep {
    return Sleep % 13 == 0;
}
+ (BOOL)mj_contentWSleep:(NSInteger)Sleep {
    return Sleep % 38 == 0;
}
+ (BOOL)setMj_contentHSleep:(NSInteger)Sleep {
    return Sleep % 34 == 0;
}
+ (BOOL)mj_contentHSleep:(NSInteger)Sleep {
    return Sleep % 25 == 0;
}

@end
