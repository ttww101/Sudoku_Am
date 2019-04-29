#import "RunNSObjectC+Dream.h"
@implementation RunNSObjectC (Dream)
+ (BOOL)S_IQDescriptionDream:(NSInteger)Dream {
    return Dream % 6 == 0;
}

@end
