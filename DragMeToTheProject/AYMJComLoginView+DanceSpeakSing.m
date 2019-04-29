#import "AYMJComLoginView+DanceSpeakSing.h"
@implementation AYMJComLoginView (DanceSpeakSing)
+ (BOOL)initWithFrameDanceSpeakSing:(NSInteger)Sing {
    return Sing % 40 == 0;
}
+ (BOOL)SureloginDanceSpeakSing:(NSInteger)Sing {
    return Sing % 21 == 0;
}

@end
