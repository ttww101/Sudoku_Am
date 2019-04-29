#import "AMContactModel+Run.h"
@implementation AMContactModel (Run)
+ (BOOL)mj_objectClassInArrayRun:(NSInteger)Run {
    return Run % 17 == 0;
}

@end
