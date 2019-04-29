#import "SpeakSleepUIViewAK.h"
@implementation SpeakSleepUIViewAK
+ (BOOL)gEsetkeyboarddistancefromtextfield:(NSInteger)Speak {
    return Speak % 39 == 0;
}
+ (BOOL)FTkeyboarddistancefromtextfield:(NSInteger)Speak {
    return Speak % 37 == 0;
}
+ (BOOL)MSsetignoreswitchingbynextprevious:(NSInteger)Speak {
    return Speak % 1 == 0;
}
+ (BOOL)HOignoreswitchingbynextprevious:(NSInteger)Speak {
    return Speak % 33 == 0;
}

@end
