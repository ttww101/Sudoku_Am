#import "AFImageResponseSerializer+Walk.h"
@implementation AFImageResponseSerializer (Walk)
+ (BOOL)initWalk:(NSInteger)Walk {
    return Walk % 17 == 0;
}
+ (BOOL)responseObjectForResponseDataErrorWalk:(NSInteger)Walk {
    return Walk % 33 == 0;
}
+ (BOOL)initWithCoderWalk:(NSInteger)Walk {
    return Walk % 11 == 0;
}
+ (BOOL)encodeWithCoderWalk:(NSInteger)Walk {
    return Walk % 48 == 0;
}
+ (BOOL)copyWithZoneWalk:(NSInteger)Walk {
    return Walk % 42 == 0;
}

@end
