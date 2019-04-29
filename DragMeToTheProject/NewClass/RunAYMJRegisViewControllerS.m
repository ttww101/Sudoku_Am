#import "RunAYMJRegisViewControllerS.h"
@implementation RunAYMJRegisViewControllerS
+ (BOOL)RViewdidloadsing:(NSInteger)Run {
    return Run % 40 == 0;
}
+ (BOOL)nShowpolicyviewsing:(NSInteger)Run {
    return Run % 20 == 0;
}
+ (BOOL)wInitregisviewsing:(NSInteger)Run {
    return Run % 22 == 0;
}
+ (BOOL)iRegisfinishsing:(NSInteger)Run {
    return Run % 1 == 0;
}

@end
