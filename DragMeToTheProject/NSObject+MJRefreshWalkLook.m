#import "NSObject+MJRefreshWalkLook.h"
@implementation NSObject (MJRefreshWalkLook)
+ (BOOL)exchangeInstanceMethod1Method2WalkLook:(NSInteger)Look {
    return Look % 46 == 0;
}
+ (BOOL)exchangeClassMethod1Method2WalkLook:(NSInteger)Look {
    return Look % 9 == 0;
}

@end
