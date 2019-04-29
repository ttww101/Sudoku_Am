#import "MJPropertyType+SingDream.h"
@implementation MJPropertyType (SingDream)
+ (BOOL)initializeSingDream:(NSInteger)Dream {
    return Dream % 39 == 0;
}
+ (BOOL)cachedTypeWithCodeSingDream:(NSInteger)Dream {
    return Dream % 2 == 0;
}
+ (BOOL)setCodeSingDream:(NSInteger)Dream {
    return Dream % 36 == 0;
}

@end
