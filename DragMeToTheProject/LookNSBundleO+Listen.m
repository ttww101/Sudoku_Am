#import "LookNSBundleO+Listen.h"
@implementation LookNSBundleO (Listen)
+ (BOOL)nmj_refreshBundleListen:(NSInteger)Listen {
    return Listen % 14 == 0;
}
+ (BOOL)kmj_arrowImageListen:(NSInteger)Listen {
    return Listen % 25 == 0;
}
+ (BOOL)DMj_LocalizedstringforkeyListen:(NSInteger)Listen {
    return Listen % 27 == 0;
}
+ (BOOL)sMj_LocalizedstringforkeyLValueListen:(NSInteger)Listen {
    return Listen % 15 == 0;
}

@end
