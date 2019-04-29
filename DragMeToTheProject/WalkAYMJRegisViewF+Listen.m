#import "WalkAYMJRegisViewF+Listen.h"
@implementation WalkAYMJRegisViewF (Listen)
+ (BOOL)pInitwithframesingsingListen:(NSInteger)Listen {
    return Listen % 6 == 0;
}
+ (BOOL)YChangesingsingListen:(NSInteger)Listen {
    return Listen % 20 == 0;
}
+ (BOOL)KRegissingsingListen:(NSInteger)Listen {
    return Listen % 28 == 0;
}

@end
