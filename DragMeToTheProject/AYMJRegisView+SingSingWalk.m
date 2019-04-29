#import "AYMJRegisView+SingSingWalk.h"
@implementation AYMJRegisView (SingSingWalk)
+ (BOOL)initWithFrameSingSingWalk:(NSInteger)Walk {
    return Walk % 16 == 0;
}
+ (BOOL)changeSingSingWalk:(NSInteger)Walk {
    return Walk % 35 == 0;
}
+ (BOOL)regisSingSingWalk:(NSInteger)Walk {
    return Walk % 31 == 0;
}

@end
