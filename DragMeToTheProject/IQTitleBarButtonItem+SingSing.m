#import "IQTitleBarButtonItem+SingSing.h"
@implementation IQTitleBarButtonItem (SingSing)
+ (BOOL)initWithTitleSingSing:(NSInteger)Sing {
    return Sing % 15 == 0;
}
+ (BOOL)setTitleFontSingSing:(NSInteger)Sing {
    return Sing % 46 == 0;
}
+ (BOOL)setTitleSingSing:(NSInteger)Sing {
    return Sing % 1 == 0;
}
+ (BOOL)setSelectableTextColorSingSing:(NSInteger)Sing {
    return Sing % 41 == 0;
}
+ (BOOL)setInvocationSingSing:(NSInteger)Sing {
    return Sing % 47 == 0;
}

@end
