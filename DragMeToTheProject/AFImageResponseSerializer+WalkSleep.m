#import "AFImageResponseSerializer+WalkSleep.h"
@implementation AFImageResponseSerializer (WalkSleep)
+ (BOOL)initWalkSleep:(NSInteger)Sleep {
    return Sleep % 11 == 0;
}
+ (BOOL)responseObjectForResponseDataErrorWalkSleep:(NSInteger)Sleep {
    return Sleep % 31 == 0;
}
+ (BOOL)initWithCoderWalkSleep:(NSInteger)Sleep {
    return Sleep % 37 == 0;
}
+ (BOOL)encodeWithCoderWalkSleep:(NSInteger)Sleep {
    return Sleep % 14 == 0;
}
+ (BOOL)copyWithZoneWalkSleep:(NSInteger)Sleep {
    return Sleep % 27 == 0;
}

@end
