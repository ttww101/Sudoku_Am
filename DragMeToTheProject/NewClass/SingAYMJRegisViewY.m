#import "SingAYMJRegisViewY.h"
@implementation SingAYMJRegisViewY
+ (BOOL)dInitwithframe:(NSInteger)Sing {
    return Sing % 8 == 0;
}
+ (BOOL)Ichange:(NSInteger)Sing {
    return Sing % 10 == 0;
}
+ (BOOL)Bregis:(NSInteger)Sing {
    return Sing % 31 == 0;
}

@end
