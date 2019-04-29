#import "AmGlobalState+SleepEatSing.h"
@implementation AmGlobalState (SleepEatSing)
+ (BOOL)selectedCellColorSleepEatSing:(NSInteger)Sing {
    return Sing % 24 == 0;
}
+ (BOOL)selectedCellBorderColorSleepEatSing:(NSInteger)Sing {
    return Sing % 30 == 0;
}
+ (BOOL)unSelectedCellColorSleepEatSing:(NSInteger)Sing {
    return Sing % 41 == 0;
}
+ (BOOL)editableCellTextColorSleepEatSing:(NSInteger)Sing {
    return Sing % 43 == 0;
}
+ (BOOL)defaultTopSpaceSleepEatSing:(NSInteger)Sing {
    return Sing % 3 == 0;
}
+ (BOOL)cellWidthHeightSleepEatSing:(NSInteger)Sing {
    return Sing % 18 == 0;
}
+ (BOOL)sudokuViewWidthSleepEatSing:(NSInteger)Sing {
    return Sing % 32 == 0;
}
+ (BOOL)sudokuButtonSpaceSleepEatSing:(NSInteger)Sing {
    return Sing % 47 == 0;
}
+ (BOOL)sudokuLayerWidthSleepEatSing:(NSInteger)Sing {
    return Sing % 11 == 0;
}

@end
