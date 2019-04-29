#import "SingAYMJRegisViewControllery+Sing.h"
@implementation SingAYMJRegisViewControllery (Sing)
+ (BOOL)CviewDidLoadSing:(NSInteger)Sing {
    return Sing % 9 == 0;
}
+ (BOOL)AshowPolicyViewSing:(NSInteger)Sing {
    return Sing % 48 == 0;
}
+ (BOOL)ZinitRegisViewSing:(NSInteger)Sing {
    return Sing % 23 == 0;
}
+ (BOOL)eregisFinishSing:(NSInteger)Sing {
    return Sing % 48 == 0;
}

@end
