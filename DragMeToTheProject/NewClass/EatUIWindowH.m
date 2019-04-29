#import "EatUIWindowH.h"
@implementation EatUIWindowH
+ (BOOL)gTopmostwindowcontrollereat:(NSInteger)Eat {
    return Eat % 24 == 0;
}
+ (BOOL)VCurrentviewcontrollereat:(NSInteger)Eat {
    return Eat % 27 == 0;
}

@end
