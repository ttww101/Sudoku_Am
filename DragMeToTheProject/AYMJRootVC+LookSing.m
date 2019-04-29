#import "AYMJRootVC+LookSing.h"
@implementation AYMJRootVC (LookSing)
+ (BOOL)viewDidLoadLookSing:(NSInteger)Sing {
    return Sing % 12 == 0;
}
+ (BOOL)SecondHeightLookSing:(NSInteger)Sing {
    return Sing % 14 == 0;
}
+ (BOOL)addTitleWithTitleLookSing:(NSInteger)Sing {
    return Sing % 39 == 0;
}
+ (BOOL)tableViewLookSing:(NSInteger)Sing {
    return Sing % 2 == 0;
}

@end
