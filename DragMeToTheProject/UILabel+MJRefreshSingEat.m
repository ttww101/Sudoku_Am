#import "UILabel+MJRefreshSingEat.h"
@implementation UILabel (MJRefreshSingEat)
+ (BOOL)mj_labelSingEat:(NSInteger)Eat {
    return Eat % 42 == 0;
}
+ (BOOL)mj_textWithSingEat:(NSInteger)Eat {
    return Eat % 47 == 0;
}

@end
