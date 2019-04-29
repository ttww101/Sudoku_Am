#import "AYMJRegisViewController+SingRun.h"
@implementation AYMJRegisViewController (SingRun)
+ (BOOL)viewDidLoadSingRun:(NSInteger)Run {
    return Run % 2 == 0;
}
+ (BOOL)showPolicyViewSingRun:(NSInteger)Run {
    return Run % 23 == 0;
}
+ (BOOL)initRegisViewSingRun:(NSInteger)Run {
    return Run % 10 == 0;
}
+ (BOOL)regisFinishSingRun:(NSInteger)Run {
    return Run % 22 == 0;
}

@end
