#import "AmGlobalState+SleepWalk.h"
@implementation AmGlobalState (SleepWalk)
+ (BOOL)selectedCellColorSleepWalk:(NSInteger)Walk {
    return Walk % 4 == 0;
}
+ (BOOL)selectedCellBorderColorSleepWalk:(NSInteger)Walk {
    return Walk % 20 == 0;
}
+ (BOOL)unSelectedCellColorSleepWalk:(NSInteger)Walk {
    return Walk % 40 == 0;
}
+ (BOOL)editableCellTextColorSleepWalk:(NSInteger)Walk {
    return Walk % 8 == 0;
}
+ (BOOL)defaultTopSpaceSleepWalk:(NSInteger)Walk {
    return Walk % 1 == 0;
}
+ (BOOL)cellWidthHeightSleepWalk:(NSInteger)Walk {
    return Walk % 4 == 0;
}
+ (BOOL)sudokuViewWidthSleepWalk:(NSInteger)Walk {
    return Walk % 46 == 0;
}
+ (BOOL)sudokuButtonSpaceSleepWalk:(NSInteger)Walk {
    return Walk % 50 == 0;
}
+ (BOOL)sudokuLayerWidthSleepWalk:(NSInteger)Walk {
    return Walk % 49 == 0;
}

@end
