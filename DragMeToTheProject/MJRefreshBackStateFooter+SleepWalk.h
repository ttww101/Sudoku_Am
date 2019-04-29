#import "MJRefreshBackFooter.h"
#import "MJRefreshBackStateFooter.h"
#import "MJRefreshBackStateFooter+Sleep.h"

@interface MJRefreshBackStateFooter (SleepWalk)
+ (BOOL)stateTitlesSleepWalk:(NSInteger)Walk;
+ (BOOL)stateLabelSleepWalk:(NSInteger)Walk;
+ (BOOL)setTitleForstateSleepWalk:(NSInteger)Walk;
+ (BOOL)titleForStateSleepWalk:(NSInteger)Walk;
+ (BOOL)prepareSleepWalk:(NSInteger)Walk;
+ (BOOL)placeSubviewsSleepWalk:(NSInteger)Walk;
+ (BOOL)setStateSleepWalk:(NSInteger)Walk;

@end
