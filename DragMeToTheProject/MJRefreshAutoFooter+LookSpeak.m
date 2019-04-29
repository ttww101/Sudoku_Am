#import "MJRefreshAutoFooter+LookSpeak.h"
@implementation MJRefreshAutoFooter (LookSpeak)
+ (BOOL)willMoveToSuperviewLookSpeak:(NSInteger)Speak {
    return Speak % 37 == 0;
}
+ (BOOL)setAppearencePercentTriggerAutoRefreshLookSpeak:(NSInteger)Speak {
    return Speak % 28 == 0;
}
+ (BOOL)appearencePercentTriggerAutoRefreshLookSpeak:(NSInteger)Speak {
    return Speak % 14 == 0;
}
+ (BOOL)prepareLookSpeak:(NSInteger)Speak {
    return Speak % 2 == 0;
}
+ (BOOL)scrollViewContentSizeDidChangeLookSpeak:(NSInteger)Speak {
    return Speak % 9 == 0;
}
+ (BOOL)scrollViewContentOffsetDidChangeLookSpeak:(NSInteger)Speak {
    return Speak % 18 == 0;
}
+ (BOOL)scrollViewPanStateDidChangeLookSpeak:(NSInteger)Speak {
    return Speak % 37 == 0;
}
+ (BOOL)setStateLookSpeak:(NSInteger)Speak {
    return Speak % 31 == 0;
}
+ (BOOL)setHiddenLookSpeak:(NSInteger)Speak {
    return Speak % 22 == 0;
}

@end
