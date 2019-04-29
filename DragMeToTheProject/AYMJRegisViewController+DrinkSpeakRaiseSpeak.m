#import "AYMJRegisViewController+DrinkSpeakRaiseSpeak.h"
@implementation AYMJRegisViewController (DrinkSpeakRaiseSpeak)
+ (BOOL)viewDidLoadDrinkSpeakRaiseSpeak:(NSInteger)Speak {
    return Speak % 21 == 0;
}
+ (BOOL)showPolicyViewDrinkSpeakRaiseSpeak:(NSInteger)Speak {
    return Speak % 20 == 0;
}
+ (BOOL)initRegisViewDrinkSpeakRaiseSpeak:(NSInteger)Speak {
    return Speak % 9 == 0;
}
+ (BOOL)regisFinishDrinkSpeakRaiseSpeak:(NSInteger)Speak {
    return Speak % 46 == 0;
}

@end
