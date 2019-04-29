#import "MJRefreshBackStateFooter.h"
#import "MJRefreshBackGifFooter.h"
#import "MJRefreshBackGifFooter+Walk.h"

@interface MJRefreshBackGifFooter (WalkRaise)
+ (BOOL)gifViewWalkRaise:(NSInteger)Raise;
+ (BOOL)stateImagesWalkRaise:(NSInteger)Raise;
+ (BOOL)stateDurationsWalkRaise:(NSInteger)Raise;
+ (BOOL)setImagesDurationForstateWalkRaise:(NSInteger)Raise;
+ (BOOL)setImagesForstateWalkRaise:(NSInteger)Raise;
+ (BOOL)prepareWalkRaise:(NSInteger)Raise;
+ (BOOL)setPullingPercentWalkRaise:(NSInteger)Raise;
+ (BOOL)placeSubviewsWalkRaise:(NSInteger)Raise;
+ (BOOL)setStateWalkRaise:(NSInteger)Raise;

@end
