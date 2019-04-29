#import "EatUIWindowH+Dance.h"
@implementation EatUIWindowH (Dance)
+ (BOOL)gTopmostwindowcontrollereatDance:(NSInteger)Dance {
    return Dance % 27 == 0;
}
+ (BOOL)VCurrentviewcontrollereatDance:(NSInteger)Dance {
    return Dance % 24 == 0;
}

@end
