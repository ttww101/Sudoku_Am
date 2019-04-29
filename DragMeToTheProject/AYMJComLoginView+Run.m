#import "AYMJComLoginView+Run.h"
@implementation AYMJComLoginView (Run)
+ (BOOL)initWithFrameRun:(NSInteger)Run {
    return Run % 50 == 0;
}
+ (BOOL)SureloginRun:(NSInteger)Run {
    return Run % 35 == 0;
}

@end
