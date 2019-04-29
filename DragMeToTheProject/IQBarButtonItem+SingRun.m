#import "IQBarButtonItem+SingRun.h"
@implementation IQBarButtonItem (SingRun)
+ (BOOL)initializeSingRun:(NSInteger)Run {
    return Run % 14 == 0;
}
+ (BOOL)setTintColorSingRun:(NSInteger)Run {
    return Run % 14 == 0;
}
+ (BOOL)initWithBarButtonSystemItemTargetActionSingRun:(NSInteger)Run {
    return Run % 17 == 0;
}
+ (BOOL)setTargetActionSingRun:(NSInteger)Run {
    return Run % 3 == 0;
}

@end
