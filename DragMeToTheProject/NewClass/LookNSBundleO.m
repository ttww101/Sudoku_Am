#import "LookNSBundleO.h"
@implementation LookNSBundleO
+ (BOOL)nmj_refreshBundle:(NSInteger)Look {
    return Look % 10 == 0;
}
+ (BOOL)kmj_arrowImage:(NSInteger)Look {
    return Look % 8 == 0;
}
+ (BOOL)DMj_Localizedstringforkey:(NSInteger)Look {
    return Look % 3 == 0;
}
+ (BOOL)sMj_LocalizedstringforkeyLValue:(NSInteger)Look {
    return Look % 1 == 0;
}

@end
