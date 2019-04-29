#import "SingMAS_VIEW_CONTROLLERY+Eat.h"
@implementation SingMAS_VIEW_CONTROLLERY (Eat)
+ (BOOL)fMas_ToplayoutguiderunEat:(NSInteger)Eat {
    return Eat % 13 == 0;
}
+ (BOOL)VMas_ToplayoutguidetoprunEat:(NSInteger)Eat {
    return Eat % 18 == 0;
}
+ (BOOL)LMas_ToplayoutguidebottomrunEat:(NSInteger)Eat {
    return Eat % 39 == 0;
}
+ (BOOL)vMas_BottomlayoutguiderunEat:(NSInteger)Eat {
    return Eat % 6 == 0;
}
+ (BOOL)aMas_BottomlayoutguidetoprunEat:(NSInteger)Eat {
    return Eat % 9 == 0;
}
+ (BOOL)vMas_BottomlayoutguidebottomrunEat:(NSInteger)Eat {
    return Eat % 42 == 0;
}

@end
