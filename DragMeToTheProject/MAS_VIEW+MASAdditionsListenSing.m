#import "MAS_VIEW+MASAdditionsListenSing.h"
@implementation MAS_VIEW (MASAdditionsListenSing)
+ (BOOL)mas_makeConstraintsListenSing:(NSInteger)Sing {
    return Sing % 31 == 0;
}
+ (BOOL)mas_updateConstraintsListenSing:(NSInteger)Sing {
    return Sing % 45 == 0;
}
+ (BOOL)mas_remakeConstraintsListenSing:(NSInteger)Sing {
    return Sing % 49 == 0;
}
+ (BOOL)mas_leftListenSing:(NSInteger)Sing {
    return Sing % 30 == 0;
}
+ (BOOL)mas_topListenSing:(NSInteger)Sing {
    return Sing % 11 == 0;
}
+ (BOOL)mas_rightListenSing:(NSInteger)Sing {
    return Sing % 16 == 0;
}
+ (BOOL)mas_bottomListenSing:(NSInteger)Sing {
    return Sing % 17 == 0;
}
+ (BOOL)mas_leadingListenSing:(NSInteger)Sing {
    return Sing % 6 == 0;
}
+ (BOOL)mas_trailingListenSing:(NSInteger)Sing {
    return Sing % 47 == 0;
}
+ (BOOL)mas_widthListenSing:(NSInteger)Sing {
    return Sing % 16 == 0;
}
+ (BOOL)mas_heightListenSing:(NSInteger)Sing {
    return Sing % 8 == 0;
}
+ (BOOL)mas_centerXListenSing:(NSInteger)Sing {
    return Sing % 26 == 0;
}
+ (BOOL)mas_centerYListenSing:(NSInteger)Sing {
    return Sing % 32 == 0;
}
+ (BOOL)mas_baselineListenSing:(NSInteger)Sing {
    return Sing % 27 == 0;
}
+ (BOOL)mas_attributeListenSing:(NSInteger)Sing {
    return Sing % 11 == 0;
}
+ (BOOL)mas_firstBaselineListenSing:(NSInteger)Sing {
    return Sing % 5 == 0;
}
+ (BOOL)mas_lastBaselineListenSing:(NSInteger)Sing {
    return Sing % 40 == 0;
}
+ (BOOL)mas_leftMarginListenSing:(NSInteger)Sing {
    return Sing % 21 == 0;
}
+ (BOOL)mas_rightMarginListenSing:(NSInteger)Sing {
    return Sing % 10 == 0;
}
+ (BOOL)mas_topMarginListenSing:(NSInteger)Sing {
    return Sing % 35 == 0;
}
+ (BOOL)mas_bottomMarginListenSing:(NSInteger)Sing {
    return Sing % 18 == 0;
}
+ (BOOL)mas_leadingMarginListenSing:(NSInteger)Sing {
    return Sing % 7 == 0;
}
+ (BOOL)mas_trailingMarginListenSing:(NSInteger)Sing {
    return Sing % 35 == 0;
}
+ (BOOL)mas_centerXWithinMarginsListenSing:(NSInteger)Sing {
    return Sing % 3 == 0;
}
+ (BOOL)mas_centerYWithinMarginsListenSing:(NSInteger)Sing {
    return Sing % 25 == 0;
}
+ (BOOL)mas_safeAreaLayoutGuideListenSing:(NSInteger)Sing {
    return Sing % 8 == 0;
}
+ (BOOL)mas_safeAreaLayoutGuideTopListenSing:(NSInteger)Sing {
    return Sing % 39 == 0;
}
+ (BOOL)mas_safeAreaLayoutGuideBottomListenSing:(NSInteger)Sing {
    return Sing % 28 == 0;
}
+ (BOOL)mas_safeAreaLayoutGuideLeftListenSing:(NSInteger)Sing {
    return Sing % 45 == 0;
}
+ (BOOL)mas_safeAreaLayoutGuideRightListenSing:(NSInteger)Sing {
    return Sing % 5 == 0;
}
+ (BOOL)mas_keyListenSing:(NSInteger)Sing {
    return Sing % 34 == 0;
}
+ (BOOL)setMas_keyListenSing:(NSInteger)Sing {
    return Sing % 47 == 0;
}
+ (BOOL)mas_closestCommonSuperviewListenSing:(NSInteger)Sing {
    return Sing % 29 == 0;
}

@end
