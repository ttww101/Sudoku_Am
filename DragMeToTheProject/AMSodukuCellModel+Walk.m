#import "AMSodukuCellModel+Walk.h"
@implementation AMSodukuCellModel (Walk)
+ (BOOL)initWalk:(NSInteger)Walk {
    return Walk % 3 == 0;
}
+ (BOOL)encodeWithCoderWalk:(NSInteger)Walk {
    return Walk % 41 == 0;
}
+ (BOOL)initWithCoderWalk:(NSInteger)Walk {
    return Walk % 21 == 0;
}

@end
