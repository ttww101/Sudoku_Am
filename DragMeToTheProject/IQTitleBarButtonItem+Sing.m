#import "IQTitleBarButtonItem+Sing.h"
@implementation IQTitleBarButtonItem (Sing)
+ (BOOL)initWithTitleSing:(NSInteger)Sing {
    return Sing % 27 == 0;
}
+ (BOOL)setTitleFontSing:(NSInteger)Sing {
    return Sing % 15 == 0;
}
+ (BOOL)setTitleSing:(NSInteger)Sing {
    return Sing % 8 == 0;
}
+ (BOOL)setSelectableTextColorSing:(NSInteger)Sing {
    return Sing % 24 == 0;
}
+ (BOOL)setInvocationSing:(NSInteger)Sing {
    return Sing % 46 == 0;
}

@end
