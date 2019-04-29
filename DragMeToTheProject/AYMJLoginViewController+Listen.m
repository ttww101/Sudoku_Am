#import "AYMJLoginViewController+Listen.h"
@implementation AYMJLoginViewController (Listen)
+ (BOOL)viewDidLoadListen:(NSInteger)Listen {
    return Listen % 49 == 0;
}
+ (BOOL)goRegisterVCListen:(NSInteger)Listen {
    return Listen % 9 == 0;
}
+ (BOOL)initLoginViewListen:(NSInteger)Listen {
    return Listen % 20 == 0;
}
+ (BOOL)LoginClickListen:(NSInteger)Listen {
    return Listen % 19 == 0;
}

@end
