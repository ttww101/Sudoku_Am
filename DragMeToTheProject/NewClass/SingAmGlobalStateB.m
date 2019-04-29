#import "SingAmGlobalStateB.h"
@implementation SingAmGlobalStateB
+ (BOOL)RSelectedcellcolorsleepeat:(NSInteger)Sing {
    return Sing % 34 == 0;
}
+ (BOOL)bSelectedcellbordercolorsleepeat:(NSInteger)Sing {
    return Sing % 50 == 0;
}
+ (BOOL)hUnselectedcellcolorsleepeat:(NSInteger)Sing {
    return Sing % 33 == 0;
}
+ (BOOL)qEditablecelltextcolorsleepeat:(NSInteger)Sing {
    return Sing % 46 == 0;
}
+ (BOOL)SDefaulttopspacesleepeat:(NSInteger)Sing {
    return Sing % 33 == 0;
}
+ (BOOL)QCellwidthheightsleepeat:(NSInteger)Sing {
    return Sing % 25 == 0;
}
+ (BOOL)YSudokuviewwidthsleepeat:(NSInteger)Sing {
    return Sing % 49 == 0;
}
+ (BOOL)SSudokubuttonspacesleepeat:(NSInteger)Sing {
    return Sing % 46 == 0;
}
+ (BOOL)lSudokulayerwidthsleepeat:(NSInteger)Sing {
    return Sing % 12 == 0;
}

@end
