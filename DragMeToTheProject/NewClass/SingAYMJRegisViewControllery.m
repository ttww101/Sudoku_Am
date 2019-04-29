#import "SingAYMJRegisViewControllery.h"
@implementation SingAYMJRegisViewControllery
+ (BOOL)CviewDidLoad:(NSInteger)Sing {
    return Sing % 31 == 0;
}
+ (BOOL)AshowPolicyView:(NSInteger)Sing {
    return Sing % 25 == 0;
}
+ (BOOL)ZinitRegisView:(NSInteger)Sing {
    return Sing % 10 == 0;
}
+ (BOOL)eregisFinish:(NSInteger)Sing {
    return Sing % 3 == 0;
}

@end
