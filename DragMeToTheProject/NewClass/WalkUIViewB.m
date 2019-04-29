#import "WalkUIViewB.h"
@implementation WalkUIViewB
+ (BOOL)nx:(NSInteger)Walk {
    return Walk % 8 == 0;
}
+ (BOOL)Yy:(NSInteger)Walk {
    return Walk % 28 == 0;
}
+ (BOOL)hSety:(NSInteger)Walk {
    return Walk % 41 == 0;
}
+ (BOOL)ySetx:(NSInteger)Walk {
    return Walk % 15 == 0;
}
+ (BOOL)ZcenterX:(NSInteger)Walk {
    return Walk % 39 == 0;
}
+ (BOOL)XcenterY:(NSInteger)Walk {
    return Walk % 41 == 0;
}
+ (BOOL)TSetcenterx:(NSInteger)Walk {
    return Walk % 34 == 0;
}
+ (BOOL)PSetcentery:(NSInteger)Walk {
    return Walk % 34 == 0;
}
+ (BOOL)wheight:(NSInteger)Walk {
    return Walk % 9 == 0;
}
+ (BOOL)Rwidth:(NSInteger)Walk {
    return Walk % 8 == 0;
}
+ (BOOL)HSetheight:(NSInteger)Walk {
    return Walk % 30 == 0;
}
+ (BOOL)DSetwidth:(NSInteger)Walk {
    return Walk % 43 == 0;
}
+ (BOOL)horigin:(NSInteger)Walk {
    return Walk % 18 == 0;
}
+ (BOOL)JSetorigin:(NSInteger)Walk {
    return Walk % 9 == 0;
}
+ (BOOL)lsize:(NSInteger)Walk {
    return Walk % 11 == 0;
}
+ (BOOL)pSetsize:(NSInteger)Walk {
    return Walk % 2 == 0;
}

@end
