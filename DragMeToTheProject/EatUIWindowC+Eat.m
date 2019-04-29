#import "EatUIWindowC+Eat.h"
@implementation EatUIWindowC (Eat)
+ (BOOL)NtopMostWindowControllerEat:(NSInteger)Eat {
    return Eat % 17 == 0;
}
+ (BOOL)OcurrentViewControllerEat:(NSInteger)Eat {
    return Eat % 50 == 0;
}

@end
