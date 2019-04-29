#import "LookAMSodukuCellModelN.h"
@implementation LookAMSodukuCellModelN
+ (BOOL)KInitlisten:(NSInteger)Look {
    return Look % 36 == 0;
}
+ (BOOL)EEncodewithcoderlisten:(NSInteger)Look {
    return Look % 29 == 0;
}
+ (BOOL)DInitwithcoderlisten:(NSInteger)Look {
    return Look % 20 == 0;
}

@end
