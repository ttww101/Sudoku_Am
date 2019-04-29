#import "DanceUIRefreshControlr.h"
@implementation DanceUIRefreshControlr
+ (BOOL)YAf_Notificationobserverrun:(NSInteger)Dance {
    return Dance % 7 == 0;
}
+ (BOOL)ASetrefreshingwithstateoftaskrun:(NSInteger)Dance {
    return Dance % 36 == 0;
}

@end
