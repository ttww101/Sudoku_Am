#import "RunMAS_VIEW_CONTROLLERe.h"
@implementation RunMAS_VIEW_CONTROLLERe
+ (BOOL)smas_topLayoutGuide:(NSInteger)Run {
    return Run % 11 == 0;
}
+ (BOOL)imas_topLayoutGuideTop:(NSInteger)Run {
    return Run % 11 == 0;
}
+ (BOOL)omas_topLayoutGuideBottom:(NSInteger)Run {
    return Run % 15 == 0;
}
+ (BOOL)Jmas_bottomLayoutGuide:(NSInteger)Run {
    return Run % 34 == 0;
}
+ (BOOL)Mmas_bottomLayoutGuideTop:(NSInteger)Run {
    return Run % 10 == 0;
}
+ (BOOL)amas_bottomLayoutGuideBottom:(NSInteger)Run {
    return Run % 21 == 0;
}

@end
