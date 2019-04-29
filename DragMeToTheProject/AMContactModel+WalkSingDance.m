#import "AMContactModel+WalkSingDance.h"
@implementation AMContactModel (WalkSingDance)
+ (BOOL)mj_objectClassInArrayWalkSingDance:(NSInteger)Dance {
    return Dance % 35 == 0;
}

@end
