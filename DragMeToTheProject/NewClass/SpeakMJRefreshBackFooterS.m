#import "SpeakMJRefreshBackFooterS.h"
@implementation SpeakMJRefreshBackFooterS
+ (BOOL)RWillmovetosuperviewlook:(NSInteger)Speak {
    return Speak % 6 == 0;
}
+ (BOOL)RScrollviewcontentoffsetdidchangelook:(NSInteger)Speak {
    return Speak % 12 == 0;
}
+ (BOOL)XScrollviewcontentsizedidchangelook:(NSInteger)Speak {
    return Speak % 33 == 0;
}
+ (BOOL)FSetstatelook:(NSInteger)Speak {
    return Speak % 49 == 0;
}
+ (BOOL)uHeightforcontentbreakviewlook:(NSInteger)Speak {
    return Speak % 3 == 0;
}
+ (BOOL)GHappenoffsetylook:(NSInteger)Speak {
    return Speak % 16 == 0;
}

@end
