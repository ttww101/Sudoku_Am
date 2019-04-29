#import "AMSodukuCellModel+WalkDance.h"
@implementation AMSodukuCellModel (WalkDance)
+ (BOOL)initWalkDance:(NSInteger)Dance {
    return Dance % 20 == 0;
}
+ (BOOL)encodeWithCoderWalkDance:(NSInteger)Dance {
    return Dance % 43 == 0;
}
+ (BOOL)initWithCoderWalkDance:(NSInteger)Dance {
    return Dance % 13 == 0;
}

@end
