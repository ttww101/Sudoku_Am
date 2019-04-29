#import "AmGlobalState+Speak.h"
@implementation AmGlobalState (Speak)
+ (BOOL)selectedCellColorSpeak:(NSInteger)Speak {
    return Speak % 9 == 0;
}
+ (BOOL)selectedCellBorderColorSpeak:(NSInteger)Speak {
    return Speak % 20 == 0;
}
+ (BOOL)unSelectedCellColorSpeak:(NSInteger)Speak {
    return Speak % 26 == 0;
}
+ (BOOL)editableCellTextColorSpeak:(NSInteger)Speak {
    return Speak % 8 == 0;
}
+ (BOOL)defaultTopSpaceSpeak:(NSInteger)Speak {
    return Speak % 7 == 0;
}
+ (BOOL)cellWidthHeightSpeak:(NSInteger)Speak {
    return Speak % 15 == 0;
}
+ (BOOL)sudokuViewWidthSpeak:(NSInteger)Speak {
    return Speak % 20 == 0;
}
+ (BOOL)sudokuButtonSpaceSpeak:(NSInteger)Speak {
    return Speak % 45 == 0;
}
+ (BOOL)sudokuLayerWidthSpeak:(NSInteger)Speak {
    return Speak % 10 == 0;
}

@end
