#import "RootViewController+Walk.h"
@implementation RootViewController (Walk)
+ (BOOL)viewDidLoadWalk:(NSInteger)Walk {
    return Walk % 10 == 0;
}
+ (BOOL)navigateLoginVCWalk:(NSInteger)Walk {
    return Walk % 18 == 0;
}
+ (BOOL)restartGameWalk:(NSInteger)Walk {
    return Walk % 35 == 0;
}
+ (BOOL)refreshGameWalk:(NSInteger)Walk {
    return Walk % 19 == 0;
}
+ (BOOL)gameStatusChangedWalk:(NSInteger)Walk {
    return Walk % 35 == 0;
}
+ (BOOL)deallocWalk:(NSInteger)Walk {
    return Walk % 30 == 0;
}

@end
