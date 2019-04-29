#import "AYMJRegisViewController+Sing.h"
@implementation AYMJRegisViewController (Sing)
+ (BOOL)viewDidLoadSing:(NSInteger)Sing {
    return Sing % 25 == 0;
}
+ (BOOL)showPolicyViewSing:(NSInteger)Sing {
    return Sing % 5 == 0;
}
+ (BOOL)initRegisViewSing:(NSInteger)Sing {
    return Sing % 11 == 0;
}
+ (BOOL)regisFinishSing:(NSInteger)Sing {
    return Sing % 33 == 0;
}

@end
