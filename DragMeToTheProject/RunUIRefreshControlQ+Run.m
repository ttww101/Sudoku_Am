#import "RunUIRefreshControlQ+Run.h"
@implementation RunUIRefreshControlQ (Run)
+ (BOOL)faf_notificationObserverRun:(NSInteger)Run {
    return Run % 7 == 0;
}
+ (BOOL)kSetrefreshingwithstateoftaskRun:(NSInteger)Run {
    return Run % 47 == 0;
}

@end
