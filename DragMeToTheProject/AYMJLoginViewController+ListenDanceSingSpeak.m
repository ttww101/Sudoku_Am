#import "AYMJLoginViewController+ListenDanceSingSpeak.h"
@implementation AYMJLoginViewController (ListenDanceSingSpeak)
+ (BOOL)viewDidLoadListenDanceSingSpeak:(NSInteger)Speak {
    return Speak % 41 == 0;
}
+ (BOOL)goRegisterVCListenDanceSingSpeak:(NSInteger)Speak {
    return Speak % 28 == 0;
}
+ (BOOL)initLoginViewListenDanceSingSpeak:(NSInteger)Speak {
    return Speak % 16 == 0;
}
+ (BOOL)LoginClickListenDanceSingSpeak:(NSInteger)Speak {
    return Speak % 44 == 0;
}

@end
