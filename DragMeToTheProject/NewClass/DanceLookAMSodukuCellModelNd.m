#import "DanceLookAMSodukuCellModelNd.h"
@implementation DanceLookAMSodukuCellModelNd
+ (BOOL)VKinitlisten:(NSInteger)Dance {
    return Dance % 26 == 0;
}
+ (BOOL)VEencodewithcoderlisten:(NSInteger)Dance {
    return Dance % 48 == 0;
}
+ (BOOL)VDinitwithcoderlisten:(NSInteger)Dance {
    return Dance % 50 == 0;
}

@end
