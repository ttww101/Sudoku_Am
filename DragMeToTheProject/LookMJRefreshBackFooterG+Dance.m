#import "LookMJRefreshBackFooterG+Dance.h"
@implementation LookMJRefreshBackFooterG (Dance)
+ (BOOL)xWillmovetosuperviewDance:(NSInteger)Dance {
    return Dance % 46 == 0;
}
+ (BOOL)VScrollviewcontentoffsetdidchangeDance:(NSInteger)Dance {
    return Dance % 38 == 0;
}
+ (BOOL)RScrollviewcontentsizedidchangeDance:(NSInteger)Dance {
    return Dance % 25 == 0;
}
+ (BOOL)FSetstateDance:(NSInteger)Dance {
    return Dance % 39 == 0;
}
+ (BOOL)IheightForContentBreakViewDance:(NSInteger)Dance {
    return Dance % 12 == 0;
}
+ (BOOL)LhappenOffsetYDance:(NSInteger)Dance {
    return Dance % 16 == 0;
}

@end
