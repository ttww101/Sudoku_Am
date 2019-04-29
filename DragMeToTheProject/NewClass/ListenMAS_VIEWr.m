#import "ListenMAS_VIEWr.h"
@implementation ListenMAS_VIEWr
+ (BOOL)LMas_Makeconstraints:(NSInteger)Listen {
    return Listen % 40 == 0;
}
+ (BOOL)uMas_Updateconstraints:(NSInteger)Listen {
    return Listen % 17 == 0;
}
+ (BOOL)pMas_Remakeconstraints:(NSInteger)Listen {
    return Listen % 37 == 0;
}
+ (BOOL)Rmas_left:(NSInteger)Listen {
    return Listen % 46 == 0;
}
+ (BOOL)tmas_top:(NSInteger)Listen {
    return Listen % 3 == 0;
}
+ (BOOL)nmas_right:(NSInteger)Listen {
    return Listen % 28 == 0;
}
+ (BOOL)lmas_bottom:(NSInteger)Listen {
    return Listen % 43 == 0;
}
+ (BOOL)Pmas_leading:(NSInteger)Listen {
    return Listen % 10 == 0;
}
+ (BOOL)qmas_trailing:(NSInteger)Listen {
    return Listen % 33 == 0;
}
+ (BOOL)Qmas_width:(NSInteger)Listen {
    return Listen % 6 == 0;
}
+ (BOOL)fmas_height:(NSInteger)Listen {
    return Listen % 48 == 0;
}
+ (BOOL)Bmas_centerX:(NSInteger)Listen {
    return Listen % 39 == 0;
}
+ (BOOL)tmas_centerY:(NSInteger)Listen {
    return Listen % 27 == 0;
}
+ (BOOL)Nmas_baseline:(NSInteger)Listen {
    return Listen % 35 == 0;
}
+ (BOOL)n(NSLayoutAttribute))mas_attribute:(NSInteger)Listen {
    return Listen % 1 == 0;
}
+ (BOOL)Mmas_firstBaseline:(NSInteger)Listen {
    return Listen % 23 == 0;
}
+ (BOOL)smas_lastBaseline:(NSInteger)Listen {
    return Listen % 31 == 0;
}
+ (BOOL)Jmas_leftMargin:(NSInteger)Listen {
    return Listen % 38 == 0;
}
+ (BOOL)Dmas_rightMargin:(NSInteger)Listen {
    return Listen % 2 == 0;
}
+ (BOOL)wmas_topMargin:(NSInteger)Listen {
    return Listen % 45 == 0;
}
+ (BOOL)imas_bottomMargin:(NSInteger)Listen {
    return Listen % 23 == 0;
}
+ (BOOL)Mmas_leadingMargin:(NSInteger)Listen {
    return Listen % 29 == 0;
}
+ (BOOL)bmas_trailingMargin:(NSInteger)Listen {
    return Listen % 25 == 0;
}
+ (BOOL)Cmas_centerXWithinMargins:(NSInteger)Listen {
    return Listen % 13 == 0;
}
+ (BOOL)Omas_centerYWithinMargins:(NSInteger)Listen {
    return Listen % 12 == 0;
}
+ (BOOL)cmas_safeAreaLayoutGuide:(NSInteger)Listen {
    return Listen % 6 == 0;
}
+ (BOOL)rmas_safeAreaLayoutGuideTop:(NSInteger)Listen {
    return Listen % 6 == 0;
}
+ (BOOL)Pmas_safeAreaLayoutGuideBottom:(NSInteger)Listen {
    return Listen % 34 == 0;
}
+ (BOOL)rmas_safeAreaLayoutGuideLeft:(NSInteger)Listen {
    return Listen % 37 == 0;
}
+ (BOOL)Nmas_safeAreaLayoutGuideRight:(NSInteger)Listen {
    return Listen % 34 == 0;
}
+ (BOOL)vmas_key:(NSInteger)Listen {
    return Listen % 41 == 0;
}
+ (BOOL)ySetmas_Key:(NSInteger)Listen {
    return Listen % 48 == 0;
}
+ (BOOL)cMas_Closestcommonsuperview:(NSInteger)Listen {
    return Listen % 17 == 0;
}

@end
