#import "SDImageCacheConfig+DanceListen.h"
@implementation SDImageCacheConfig (DanceListen)
+ (BOOL)initDanceListen:(NSInteger)Listen {
    return Listen % 33 == 0;
}

@end
