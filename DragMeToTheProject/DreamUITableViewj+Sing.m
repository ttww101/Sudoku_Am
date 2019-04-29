#import "DreamUITableViewj+Sing.h"
@implementation DreamUITableViewj (Sing)
+ (BOOL)xloadSing:(NSInteger)Sing {
    return Sing % 33 == 0;
}
+ (BOOL)pmj_reloadDataSing:(NSInteger)Sing {
    return Sing % 14 == 0;
}

@end
