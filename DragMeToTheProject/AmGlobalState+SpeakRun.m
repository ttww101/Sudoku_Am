#import "AmGlobalState+SpeakRun.h"
@implementation AmGlobalState (SpeakRun)
+ (BOOL)selectedCellColorSpeakRun:(NSInteger)Run {
    return Run % 27 == 0;
}
+ (BOOL)selectedCellBorderColorSpeakRun:(NSInteger)Run {
    return Run % 16 == 0;
}
+ (BOOL)unSelectedCellColorSpeakRun:(NSInteger)Run {
    return Run % 23 == 0;
}
+ (BOOL)editableCellTextColorSpeakRun:(NSInteger)Run {
    return Run % 19 == 0;
}
+ (BOOL)defaultTopSpaceSpeakRun:(NSInteger)Run {
    return Run % 18 == 0;
}
+ (BOOL)cellWidthHeightSpeakRun:(NSInteger)Run {
    return Run % 38 == 0;
}
+ (BOOL)sudokuViewWidthSpeakRun:(NSInteger)Run {
    return Run % 29 == 0;
}
+ (BOOL)sudokuButtonSpaceSpeakRun:(NSInteger)Run {
    return Run % 46 == 0;
}
+ (BOOL)sudokuLayerWidthSpeakRun:(NSInteger)Run {
    return Run % 31 == 0;
}

@end
