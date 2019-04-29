#import "RunAYMJComLoginViewi.h"
@implementation RunAYMJComLoginViewi
+ (BOOL)lInitwithframe:(NSInteger)Run {
    return Run % 19 == 0;
}
+ (BOOL)ISurelogin:(NSInteger)Run {
    return Run % 6 == 0;
}

@end
