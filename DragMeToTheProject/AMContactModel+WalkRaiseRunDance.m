#import "AMContactModel+WalkRaiseRunDance.h"
@implementation AMContactModel (WalkRaiseRunDance)
+ (BOOL)mj_objectClassInArrayWalkRaiseRunDance:(NSInteger)Dance {
    return Dance % 39 == 0;
}

@end
