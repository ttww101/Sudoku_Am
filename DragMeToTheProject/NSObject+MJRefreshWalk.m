#import "NSObject+MJRefreshWalk.h"
@implementation NSObject (MJRefreshWalk)
+ (BOOL)exchangeInstanceMethod1Method2Walk:(NSInteger)Walk {
    return Walk % 7 == 0;
}
+ (BOOL)exchangeClassMethod1Method2Walk:(NSInteger)Walk {
    return Walk % 45 == 0;
}

@end
