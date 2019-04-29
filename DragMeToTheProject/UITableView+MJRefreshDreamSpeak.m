#import "UITableView+MJRefreshDreamSpeak.h"
@implementation UITableView (MJRefreshDreamSpeak)
+ (BOOL)loadDreamSpeak:(NSInteger)Speak {
    return Speak % 39 == 0;
}
+ (BOOL)mj_reloadDataDreamSpeak:(NSInteger)Speak {
    return Speak % 11 == 0;
}

@end
