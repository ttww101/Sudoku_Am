#import "AYMJLoginViewController+ListenSing.h"
@implementation AYMJLoginViewController (ListenSing)
+ (BOOL)viewDidLoadListenSing:(NSInteger)Sing {
    return Sing % 1 == 0;
}
+ (BOOL)goRegisterVCListenSing:(NSInteger)Sing {
    return Sing % 24 == 0;
}
+ (BOOL)initLoginViewListenSing:(NSInteger)Sing {
    return Sing % 5 == 0;
}
+ (BOOL)LoginClickListenSing:(NSInteger)Sing {
    return Sing % 29 == 0;
}

@end
