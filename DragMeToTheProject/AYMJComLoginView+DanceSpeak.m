#import "AYMJComLoginView+DanceSpeak.h"
@implementation AYMJComLoginView (DanceSpeak)
+ (BOOL)initWithFrameDanceSpeak:(NSInteger)Speak {
    return Speak % 27 == 0;
}
+ (BOOL)SureloginDanceSpeak:(NSInteger)Speak {
    return Speak % 47 == 0;
}

@end
