#import "UIScrollView+AdditionsSpeak.h"
@implementation UIScrollView (AdditionsSpeak)
+ (BOOL)setShouldIgnoreScrollingAdjustmentSpeak:(NSInteger)Speak {
    return Speak % 37 == 0;
}
+ (BOOL)shouldIgnoreScrollingAdjustmentSpeak:(NSInteger)Speak {
    return Speak % 45 == 0;
}
+ (BOOL)setShouldRestoreScrollViewContentOffsetSpeak:(NSInteger)Speak {
    return Speak % 19 == 0;
}
+ (BOOL)shouldRestoreScrollViewContentOffsetSpeak:(NSInteger)Speak {
    return Speak % 10 == 0;
}

@end
