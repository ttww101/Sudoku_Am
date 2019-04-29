#import "MJRefreshBackNormalFooter+Speak.h"
@implementation MJRefreshBackNormalFooter (Speak)
+ (BOOL)arrowViewSpeak:(NSInteger)Speak {
    return Speak % 16 == 0;
}
+ (BOOL)loadingViewSpeak:(NSInteger)Speak {
    return Speak % 18 == 0;
}
+ (BOOL)setActivityIndicatorViewStyleSpeak:(NSInteger)Speak {
    return Speak % 14 == 0;
}
+ (BOOL)prepareSpeak:(NSInteger)Speak {
    return Speak % 29 == 0;
}
+ (BOOL)placeSubviewsSpeak:(NSInteger)Speak {
    return Speak % 20 == 0;
}
+ (BOOL)setStateSpeak:(NSInteger)Speak {
    return Speak % 15 == 0;
}

@end
