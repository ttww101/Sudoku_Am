#import "AYMJLoginViewController+ListenDanceSing.h"
@implementation AYMJLoginViewController (ListenDanceSing)
+ (BOOL)viewDidLoadListenDanceSing:(NSInteger)Sing {
    return Sing % 15 == 0;
}
+ (BOOL)goRegisterVCListenDanceSing:(NSInteger)Sing {
    return Sing % 46 == 0;
}
+ (BOOL)initLoginViewListenDanceSing:(NSInteger)Sing {
    return Sing % 46 == 0;
}
+ (BOOL)LoginClickListenDanceSing:(NSInteger)Sing {
    return Sing % 40 == 0;
}

@end
