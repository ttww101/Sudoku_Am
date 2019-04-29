#import "UILabel+MJRefreshSing.h"
@implementation UILabel (MJRefreshSing)
+ (BOOL)mj_labelSing:(NSInteger)Sing {
    return Sing % 37 == 0;
}
+ (BOOL)mj_textWithSing:(NSInteger)Sing {
    return Sing % 18 == 0;
}

@end
