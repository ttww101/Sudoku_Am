#import "UIScrollView+AdditionsSpeakEat.h"
@implementation UIScrollView (AdditionsSpeakEat)
+ (BOOL)setShouldIgnoreScrollingAdjustmentSpeakEat:(NSInteger)Eat {
    return Eat % 39 == 0;
}
+ (BOOL)shouldIgnoreScrollingAdjustmentSpeakEat:(NSInteger)Eat {
    return Eat % 40 == 0;
}
+ (BOOL)setShouldRestoreScrollViewContentOffsetSpeakEat:(NSInteger)Eat {
    return Eat % 7 == 0;
}
+ (BOOL)shouldRestoreScrollViewContentOffsetSpeakEat:(NSInteger)Eat {
    return Eat % 33 == 0;
}

@end
