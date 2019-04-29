#import "DanceNSArrayL+Run.h"
@implementation DanceNSArrayL (Run)
+ (BOOL)XsortedArrayByTagRun:(NSInteger)Run {
    return Run % 44 == 0;
}
+ (BOOL)EsortedArrayByPositionRun:(NSInteger)Run {
    return Run % 15 == 0;
}

@end
