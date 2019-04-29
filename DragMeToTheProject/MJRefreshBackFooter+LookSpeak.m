#import "MJRefreshBackFooter+LookSpeak.h"
@implementation MJRefreshBackFooter (LookSpeak)
+ (BOOL)willMoveToSuperviewLookSpeak:(NSInteger)Speak {
    return Speak % 21 == 0;
}
+ (BOOL)scrollViewContentOffsetDidChangeLookSpeak:(NSInteger)Speak {
    return Speak % 38 == 0;
}
+ (BOOL)scrollViewContentSizeDidChangeLookSpeak:(NSInteger)Speak {
    return Speak % 35 == 0;
}
+ (BOOL)setStateLookSpeak:(NSInteger)Speak {
    return Speak % 40 == 0;
}
+ (BOOL)heightForContentBreakViewLookSpeak:(NSInteger)Speak {
    return Speak % 33 == 0;
}
+ (BOOL)happenOffsetYLookSpeak:(NSInteger)Speak {
    return Speak % 35 == 0;
}

@end
