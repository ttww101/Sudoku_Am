#import "SingRunMAS_VIEW_CONTROLLEReB.h"
@implementation SingRunMAS_VIEW_CONTROLLEReB
+ (BOOL)wSmas_Toplayoutguide:(NSInteger)Sing {
    return Sing % 31 == 0;
}
+ (BOOL)LImas_Toplayoutguidetop:(NSInteger)Sing {
    return Sing % 44 == 0;
}
+ (BOOL)xOmas_Toplayoutguidebottom:(NSInteger)Sing {
    return Sing % 12 == 0;
}
+ (BOOL)YJmas_Bottomlayoutguide:(NSInteger)Sing {
    return Sing % 3 == 0;
}
+ (BOOL)xMmas_Bottomlayoutguidetop:(NSInteger)Sing {
    return Sing % 9 == 0;
}
+ (BOOL)eAmas_Bottomlayoutguidebottom:(NSInteger)Sing {
    return Sing % 31 == 0;
}

@end
