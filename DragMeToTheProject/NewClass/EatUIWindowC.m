#import "EatUIWindowC.h"
@implementation EatUIWindowC
+ (BOOL)NtopMostWindowController:(NSInteger)Eat {
    return Eat % 15 == 0;
}
+ (BOOL)OcurrentViewController:(NSInteger)Eat {
    return Eat % 45 == 0;
}

@end
