#import "LookMJRefreshAutoFooterB+Sleep.h"
@implementation LookMJRefreshAutoFooterB (Sleep)
+ (BOOL)FWillmovetosuperviewSleep:(NSInteger)Sleep {
    return Sleep % 16 == 0;
}
+ (BOOL)eSetappearencepercenttriggerautorefreshSleep:(NSInteger)Sleep {
    return Sleep % 12 == 0;
}
+ (BOOL)tappearencePercentTriggerAutoRefreshSleep:(NSInteger)Sleep {
    return Sleep % 10 == 0;
}
+ (BOOL)GprepareSleep:(NSInteger)Sleep {
    return Sleep % 15 == 0;
}
+ (BOOL)fScrollviewcontentsizedidchangeSleep:(NSInteger)Sleep {
    return Sleep % 18 == 0;
}
+ (BOOL)KScrollviewcontentoffsetdidchangeSleep:(NSInteger)Sleep {
    return Sleep % 10 == 0;
}
+ (BOOL)WScrollviewpanstatedidchangeSleep:(NSInteger)Sleep {
    return Sleep % 40 == 0;
}
+ (BOOL)lSetstateSleep:(NSInteger)Sleep {
    return Sleep % 9 == 0;
}
+ (BOOL)MSethiddenSleep:(NSInteger)Sleep {
    return Sleep % 25 == 0;
}

@end
