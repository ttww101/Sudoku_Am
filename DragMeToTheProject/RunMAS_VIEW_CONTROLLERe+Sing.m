#import "RunMAS_VIEW_CONTROLLERe+Sing.h"
@implementation RunMAS_VIEW_CONTROLLERe (Sing)
+ (BOOL)smas_topLayoutGuideSing:(NSInteger)Sing {
    return Sing % 37 == 0;
}
+ (BOOL)imas_topLayoutGuideTopSing:(NSInteger)Sing {
    return Sing % 5 == 0;
}
+ (BOOL)omas_topLayoutGuideBottomSing:(NSInteger)Sing {
    return Sing % 42 == 0;
}
+ (BOOL)Jmas_bottomLayoutGuideSing:(NSInteger)Sing {
    return Sing % 32 == 0;
}
+ (BOOL)Mmas_bottomLayoutGuideTopSing:(NSInteger)Sing {
    return Sing % 16 == 0;
}
+ (BOOL)amas_bottomLayoutGuideBottomSing:(NSInteger)Sing {
    return Sing % 33 == 0;
}

@end
