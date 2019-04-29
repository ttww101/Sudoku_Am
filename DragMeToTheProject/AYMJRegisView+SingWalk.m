#import "AYMJRegisView+SingWalk.h"
@implementation AYMJRegisView (SingWalk)
+ (BOOL)initWithFrameSingWalk:(NSInteger)Walk {
    return Walk % 21 == 0;
}
+ (BOOL)changeSingWalk:(NSInteger)Walk {
    return Walk % 29 == 0;
}
+ (BOOL)regisSingWalk:(NSInteger)Walk {
    return Walk % 18 == 0;
}

@end
