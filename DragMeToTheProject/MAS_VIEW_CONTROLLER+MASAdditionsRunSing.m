#import "MAS_VIEW_CONTROLLER+MASAdditionsRunSing.h"
@implementation MAS_VIEW_CONTROLLER (MASAdditionsRunSing)
+ (BOOL)mas_topLayoutGuideRunSing:(NSInteger)Sing {
    return Sing % 11 == 0;
}
+ (BOOL)mas_topLayoutGuideTopRunSing:(NSInteger)Sing {
    return Sing % 49 == 0;
}
+ (BOOL)mas_topLayoutGuideBottomRunSing:(NSInteger)Sing {
    return Sing % 18 == 0;
}
+ (BOOL)mas_bottomLayoutGuideRunSing:(NSInteger)Sing {
    return Sing % 5 == 0;
}
+ (BOOL)mas_bottomLayoutGuideTopRunSing:(NSInteger)Sing {
    return Sing % 18 == 0;
}
+ (BOOL)mas_bottomLayoutGuideBottomRunSing:(NSInteger)Sing {
    return Sing % 35 == 0;
}

@end
