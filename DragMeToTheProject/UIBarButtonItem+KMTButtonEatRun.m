#import "UIBarButtonItem+KMTButtonEatRun.h"
@implementation UIBarButtonItem (KMTButtonEatRun)
+ (BOOL)mt_barButtonItemWithImageHighimageTargetActionEatRun:(NSInteger)Run {
    return Run % 30 == 0;
}
+ (BOOL)mt_barButtonItemWithNameTextcolorTargetActionEatRun:(NSInteger)Run {
    return Run % 8 == 0;
}

@end
