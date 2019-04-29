#import "AYMJRegisView+Sing.h"
@implementation AYMJRegisView (Sing)
+ (BOOL)initWithFrameSing:(NSInteger)Sing {
    return Sing % 13 == 0;
}
+ (BOOL)changeSing:(NSInteger)Sing {
    return Sing % 14 == 0;
}
+ (BOOL)regisSing:(NSInteger)Sing {
    return Sing % 2 == 0;
}

@end
