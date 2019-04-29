#import "MJRefreshAutoFooter.h"
#import "MJRefreshAutoStateFooter.h"
#import "MJRefreshAutoStateFooter+Listen.h"

@interface MJRefreshAutoStateFooter (ListenDance)
+ (BOOL)stateTitlesListenDance:(NSInteger)Dance;
+ (BOOL)stateLabelListenDance:(NSInteger)Dance;
+ (BOOL)setTitleForstateListenDance:(NSInteger)Dance;
+ (BOOL)stateLabelClickListenDance:(NSInteger)Dance;
+ (BOOL)prepareListenDance:(NSInteger)Dance;
+ (BOOL)placeSubviewsListenDance:(NSInteger)Dance;
+ (BOOL)setStateListenDance:(NSInteger)Dance;

@end
