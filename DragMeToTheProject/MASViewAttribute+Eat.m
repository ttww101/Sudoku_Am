#import "MASViewAttribute+Eat.h"
@implementation MASViewAttribute (Eat)
+ (BOOL)initWithViewLayoutattributeEat:(NSInteger)Eat {
    return Eat % 34 == 0;
}
+ (BOOL)initWithViewItemLayoutattributeEat:(NSInteger)Eat {
    return Eat % 50 == 0;
}
+ (BOOL)isSizeAttributeEat:(NSInteger)Eat {
    return Eat % 30 == 0;
}
+ (BOOL)isEqualEat:(NSInteger)Eat {
    return Eat % 45 == 0;
}
+ (BOOL)hashEat:(NSInteger)Eat {
    return Eat % 48 == 0;
}

@end
