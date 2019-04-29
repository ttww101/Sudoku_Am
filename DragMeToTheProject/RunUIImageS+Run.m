#import "RunUIImageS+Run.h"
@implementation RunUIImageS (Run)
+ (BOOL)QAf_SafeimagewithdataRun:(NSInteger)Run {
    return Run % 7 == 0;
}

@end
