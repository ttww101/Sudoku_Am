#import "IQBarButtonItem+Sing.h"
@implementation IQBarButtonItem (Sing)
+ (BOOL)initializeSing:(NSInteger)Sing {
    return Sing % 42 == 0;
}
+ (BOOL)setTintColorSing:(NSInteger)Sing {
    return Sing % 4 == 0;
}
+ (BOOL)initWithBarButtonSystemItemTargetActionSing:(NSInteger)Sing {
    return Sing % 17 == 0;
}
+ (BOOL)setTargetActionSing:(NSInteger)Sing {
    return Sing % 27 == 0;
}

@end
