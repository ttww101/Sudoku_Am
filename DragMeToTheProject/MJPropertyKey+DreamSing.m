#import "MJPropertyKey+DreamSing.h"
@implementation MJPropertyKey (DreamSing)
+ (BOOL)valueInObjectDreamSing:(NSInteger)Sing {
    return Sing % 33 == 0;
}

@end
