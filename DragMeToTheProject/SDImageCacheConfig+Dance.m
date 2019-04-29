#import "SDImageCacheConfig+Dance.h"
@implementation SDImageCacheConfig (Dance)
+ (BOOL)initDance:(NSInteger)Dance {
    return Dance % 26 == 0;
}

@end
