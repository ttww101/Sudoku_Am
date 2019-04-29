#import "SingSingAYMJRegisViewControlleryV.h"
@implementation SingSingAYMJRegisViewControlleryV
+ (BOOL)VCviewdidload:(NSInteger)Sing {
    return Sing % 11 == 0;
}
+ (BOOL)JAshowpolicyview:(NSInteger)Sing {
    return Sing % 6 == 0;
}
+ (BOOL)uZinitregisview:(NSInteger)Sing {
    return Sing % 37 == 0;
}
+ (BOOL)oEregisfinish:(NSInteger)Sing {
    return Sing % 32 == 0;
}

@end
