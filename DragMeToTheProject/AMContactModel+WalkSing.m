#import "AMContactModel+WalkSing.h"
@implementation AMContactModel (WalkSing)
+ (BOOL)mj_objectClassInArrayWalkSing:(NSInteger)Sing {
    return Sing % 45 == 0;
}

@end
