#import "AMContactModel+WalkRaiseRun.h"
@implementation AMContactModel (WalkRaiseRun)
+ (BOOL)mj_objectClassInArrayWalkRaiseRun:(NSInteger)Run {
    return Run % 16 == 0;
}

@end
