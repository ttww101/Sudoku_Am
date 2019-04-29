#import "MJPropertyType+Sing.h"
@implementation MJPropertyType (Sing)
+ (BOOL)initializeSing:(NSInteger)Sing {
    return Sing % 35 == 0;
}
+ (BOOL)cachedTypeWithCodeSing:(NSInteger)Sing {
    return Sing % 18 == 0;
}
+ (BOOL)setCodeSing:(NSInteger)Sing {
    return Sing % 13 == 0;
}

@end
