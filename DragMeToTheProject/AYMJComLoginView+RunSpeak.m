#import "AYMJComLoginView+RunSpeak.h"
@implementation AYMJComLoginView (RunSpeak)
+ (BOOL)initWithFrameRunSpeak:(NSInteger)Speak {
    return Speak % 38 == 0;
}
+ (BOOL)SureloginRunSpeak:(NSInteger)Speak {
    return Speak % 47 == 0;
}

@end
