#import "SingIQTitleBarButtonItemF.h"
@implementation SingIQTitleBarButtonItemF
+ (BOOL)BInitwithtitle:(NSInteger)Sing {
    return Sing % 40 == 0;
}
+ (BOOL)XSettitlefont:(NSInteger)Sing {
    return Sing % 15 == 0;
}
+ (BOOL)cSettitle:(NSInteger)Sing {
    return Sing % 17 == 0;
}
+ (BOOL)XSetselectabletextcolor:(NSInteger)Sing {
    return Sing % 11 == 0;
}
+ (BOOL)USetinvocation:(NSInteger)Sing {
    return Sing % 3 == 0;
}

@end
