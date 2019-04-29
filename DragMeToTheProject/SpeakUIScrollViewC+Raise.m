#import "SpeakUIScrollViewC+Raise.h"
@implementation SpeakUIScrollViewC (Raise)
+ (BOOL)LSetshouldignorescrollingadjustmentRaise:(NSInteger)Raise {
    return Raise % 31 == 0;
}
+ (BOOL)KshouldIgnoreScrollingAdjustmentRaise:(NSInteger)Raise {
    return Raise % 14 == 0;
}
+ (BOOL)WSetshouldrestorescrollviewcontentoffsetRaise:(NSInteger)Raise {
    return Raise % 13 == 0;
}
+ (BOOL)yshouldRestoreScrollViewContentOffsetRaise:(NSInteger)Raise {
    return Raise % 16 == 0;
}

@end
