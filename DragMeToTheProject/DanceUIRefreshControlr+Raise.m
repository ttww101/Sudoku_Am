#import "DanceUIRefreshControlr+Raise.h"
@implementation DanceUIRefreshControlr (Raise)
+ (BOOL)YAf_NotificationobserverrunRaise:(NSInteger)Raise {
    return Raise % 7 == 0;
}
+ (BOOL)ASetrefreshingwithstateoftaskrunRaise:(NSInteger)Raise {
    return Raise % 23 == 0;
}

@end
