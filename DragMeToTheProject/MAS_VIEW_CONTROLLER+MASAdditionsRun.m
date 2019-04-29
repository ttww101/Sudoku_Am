#import "MAS_VIEW_CONTROLLER+MASAdditionsRun.h"
@implementation MAS_VIEW_CONTROLLER (MASAdditionsRun)
+ (BOOL)mas_topLayoutGuideRun:(NSInteger)Run {
    return Run % 28 == 0;
}
+ (BOOL)mas_topLayoutGuideTopRun:(NSInteger)Run {
    return Run % 4 == 0;
}
+ (BOOL)mas_topLayoutGuideBottomRun:(NSInteger)Run {
    return Run % 15 == 0;
}
+ (BOOL)mas_bottomLayoutGuideRun:(NSInteger)Run {
    return Run % 29 == 0;
}
+ (BOOL)mas_bottomLayoutGuideTopRun:(NSInteger)Run {
    return Run % 44 == 0;
}
+ (BOOL)mas_bottomLayoutGuideBottomRun:(NSInteger)Run {
    return Run % 24 == 0;
}

@end
