#import "MJRefreshAutoFooter.h"
#import "MJRefreshAutoStateFooter.h"

@interface MJRefreshAutoStateFooter (Listen)
+ (BOOL)stateTitlesListen:(NSInteger)Listen;
+ (BOOL)stateLabelListen:(NSInteger)Listen;
+ (BOOL)setTitleForstateListen:(NSInteger)Listen;
+ (BOOL)stateLabelClickListen:(NSInteger)Listen;
+ (BOOL)prepareListen:(NSInteger)Listen;
+ (BOOL)placeSubviewsListen:(NSInteger)Listen;
+ (BOOL)setStateListen:(NSInteger)Listen;

@end
