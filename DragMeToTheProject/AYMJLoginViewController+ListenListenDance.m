#import "AYMJLoginViewController+ListenListenDance.h"
@implementation AYMJLoginViewController (ListenListenDance)
+ (BOOL)viewDidLoadListenListenDance:(NSInteger)Dance {
    return Dance % 43 == 0;
}
+ (BOOL)goRegisterVCListenListenDance:(NSInteger)Dance {
    return Dance % 30 == 0;
}
+ (BOOL)initLoginViewListenListenDance:(NSInteger)Dance {
    return Dance % 29 == 0;
}
+ (BOOL)LoginClickListenListenDance:(NSInteger)Dance {
    return Dance % 42 == 0;
}

@end
