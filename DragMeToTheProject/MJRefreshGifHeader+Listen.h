#import "MJRefreshStateHeader.h"
#import "MJRefreshGifHeader.h"

@interface MJRefreshGifHeader (Listen)
+ (BOOL)gifViewListen:(NSInteger)Listen;
+ (BOOL)stateImagesListen:(NSInteger)Listen;
+ (BOOL)stateDurationsListen:(NSInteger)Listen;
+ (BOOL)setImagesDurationForstateListen:(NSInteger)Listen;
+ (BOOL)setImagesForstateListen:(NSInteger)Listen;
+ (BOOL)prepareListen:(NSInteger)Listen;
+ (BOOL)setPullingPercentListen:(NSInteger)Listen;
+ (BOOL)placeSubviewsListen:(NSInteger)Listen;
+ (BOOL)setStateListen:(NSInteger)Listen;

@end
