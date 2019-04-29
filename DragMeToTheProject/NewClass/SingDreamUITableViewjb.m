#import "SingDreamUITableViewjb.h"
@implementation SingDreamUITableViewjb
+ (BOOL)UXload:(NSInteger)Sing {
    return Sing % 40 == 0;
}
+ (BOOL)tPmj_Reloaddata:(NSInteger)Sing {
    return Sing % 10 == 0;
}

@end
