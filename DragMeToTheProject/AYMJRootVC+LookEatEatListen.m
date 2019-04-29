#import "AYMJRootVC+LookEatEatListen.h"
@implementation AYMJRootVC (LookEatEatListen)
+ (BOOL)viewDidLoadLookEatEatListen:(NSInteger)Listen {
    return Listen % 15 == 0;
}
+ (BOOL)SecondHeightLookEatEatListen:(NSInteger)Listen {
    return Listen % 26 == 0;
}
+ (BOOL)addTitleWithTitleLookEatEatListen:(NSInteger)Listen {
    return Listen % 24 == 0;
}
+ (BOOL)tableViewLookEatEatListen:(NSInteger)Listen {
    return Listen % 33 == 0;
}

@end
