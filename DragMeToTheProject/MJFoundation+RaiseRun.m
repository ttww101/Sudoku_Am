#import "MJFoundation+RaiseRun.h"
@implementation MJFoundation (RaiseRun)
+ (BOOL)foundationClassesRaiseRun:(NSInteger)Run {
    return Run % 29 == 0;
}
+ (BOOL)isClassFromFoundationRaiseRun:(NSInteger)Run {
    return Run % 5 == 0;
}

@end
