#import "AmGlobalState+SleepWalkDance.h"
@implementation AmGlobalState (SleepWalkDance)
+ (BOOL)selectedCellColorSleepWalkDance:(NSInteger)Dance {
    return Dance % 20 == 0;
}
+ (BOOL)selectedCellBorderColorSleepWalkDance:(NSInteger)Dance {
    return Dance % 25 == 0;
}
+ (BOOL)unSelectedCellColorSleepWalkDance:(NSInteger)Dance {
    return Dance % 5 == 0;
}
+ (BOOL)editableCellTextColorSleepWalkDance:(NSInteger)Dance {
    return Dance % 36 == 0;
}
+ (BOOL)defaultTopSpaceSleepWalkDance:(NSInteger)Dance {
    return Dance % 29 == 0;
}
+ (BOOL)cellWidthHeightSleepWalkDance:(NSInteger)Dance {
    return Dance % 38 == 0;
}
+ (BOOL)sudokuViewWidthSleepWalkDance:(NSInteger)Dance {
    return Dance % 5 == 0;
}
+ (BOOL)sudokuButtonSpaceSleepWalkDance:(NSInteger)Dance {
    return Dance % 27 == 0;
}
+ (BOOL)sudokuLayerWidthSleepWalkDance:(NSInteger)Dance {
    return Dance % 24 == 0;
}

@end
