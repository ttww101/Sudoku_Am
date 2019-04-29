#import "SingMAS_VIEW_CONTROLLERY.h"
@implementation SingMAS_VIEW_CONTROLLERY
+ (BOOL)fMas_Toplayoutguiderun:(NSInteger)Sing {
    return Sing % 21 == 0;
}
+ (BOOL)VMas_Toplayoutguidetoprun:(NSInteger)Sing {
    return Sing % 3 == 0;
}
+ (BOOL)LMas_Toplayoutguidebottomrun:(NSInteger)Sing {
    return Sing % 10 == 0;
}
+ (BOOL)vMas_Bottomlayoutguiderun:(NSInteger)Sing {
    return Sing % 10 == 0;
}
+ (BOOL)aMas_Bottomlayoutguidetoprun:(NSInteger)Sing {
    return Sing % 50 == 0;
}
+ (BOOL)vMas_Bottomlayoutguidebottomrun:(NSInteger)Sing {
    return Sing % 27 == 0;
}

@end
