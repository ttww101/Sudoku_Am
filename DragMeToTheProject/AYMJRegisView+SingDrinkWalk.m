#import "AYMJRegisView+SingDrinkWalk.h"
@implementation AYMJRegisView (SingDrinkWalk)
+ (BOOL)initWithFrameSingDrinkWalk:(NSInteger)Walk {
    return Walk % 27 == 0;
}
+ (BOOL)changeSingDrinkWalk:(NSInteger)Walk {
    return Walk % 13 == 0;
}
+ (BOOL)regisSingDrinkWalk:(NSInteger)Walk {
    return Walk % 30 == 0;
}

@end
