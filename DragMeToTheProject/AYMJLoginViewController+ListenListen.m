#import "AYMJLoginViewController+ListenListen.h"
@implementation AYMJLoginViewController (ListenListen)
+ (BOOL)viewDidLoadListenListen:(NSInteger)Listen {
    return Listen % 33 == 0;
}
+ (BOOL)goRegisterVCListenListen:(NSInteger)Listen {
    return Listen % 44 == 0;
}
+ (BOOL)initLoginViewListenListen:(NSInteger)Listen {
    return Listen % 28 == 0;
}
+ (BOOL)LoginClickListenListen:(NSInteger)Listen {
    return Listen % 27 == 0;
}

@end
