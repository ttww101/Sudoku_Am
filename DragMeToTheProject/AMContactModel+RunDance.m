#import "AMContactModel+RunDance.h"
@implementation AMContactModel (RunDance)
+ (BOOL)mj_objectClassInArrayRunDance:(NSInteger)Dance {
    return Dance % 31 == 0;
}

@end
