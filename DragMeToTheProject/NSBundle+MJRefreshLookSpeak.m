#import "NSBundle+MJRefreshLookSpeak.h"
@implementation NSBundle (MJRefreshLookSpeak)
+ (BOOL)mj_refreshBundleLookSpeak:(NSInteger)Speak {
    return Speak % 3 == 0;
}
+ (BOOL)mj_arrowImageLookSpeak:(NSInteger)Speak {
    return Speak % 49 == 0;
}
+ (BOOL)mj_localizedStringForKeyLookSpeak:(NSInteger)Speak {
    return Speak % 7 == 0;
}
+ (BOOL)mj_localizedStringForKeyValueLookSpeak:(NSInteger)Speak {
    return Speak % 34 == 0;
}

@end
