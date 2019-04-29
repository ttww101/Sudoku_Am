#import <Foundation/Foundation.h>
#import "SDWebImageCompat.h"
#import "SDImageCacheConfig.h"
#import "SDImageCacheConfig+Dance.h"

@interface SDImageCacheConfig (DanceListen)
+ (BOOL)initDanceListen:(NSInteger)Listen;

@end
