#import "MJRefreshAutoStateFooter.h"
#import "MJRefreshAutoNormalFooter.h"
#import "MJRefreshAutoNormalFooter+Dance.h"

@interface MJRefreshAutoNormalFooter (DanceSleep)
+ (BOOL)loadingViewDanceSleep:(NSInteger)Sleep;
+ (BOOL)setActivityIndicatorViewStyleDanceSleep:(NSInteger)Sleep;
+ (BOOL)prepareDanceSleep:(NSInteger)Sleep;
+ (BOOL)placeSubviewsDanceSleep:(NSInteger)Sleep;
+ (BOOL)setStateDanceSleep:(NSInteger)Sleep;

@end
