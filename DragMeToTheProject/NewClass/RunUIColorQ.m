#import "RunUIColorQ.h"
@implementation RunUIColorQ
+ (BOOL)iColorwithrgbstring:(NSInteger)Run {
    return Run % 34 == 0;
}
+ (BOOL)SColorwithrgbastring:(NSInteger)Run {
    return Run % 15 == 0;
}
+ (BOOL)EColorwithrmGdBAA:(NSInteger)Run {
    return Run % 26 == 0;
}
+ (BOOL)TColorwithhex:(NSInteger)Run {
    return Run % 11 == 0;
}
+ (BOOL)tColorwithhexZAlpha:(NSInteger)Run {
    return Run % 14 == 0;
}
+ (BOOL)nColorwithhexstring:(NSInteger)Run {
    return Run % 13 == 0;
}
+ (BOOL)NflatBlueColor:(NSInteger)Run {
    return Run % 1 == 0;
}
+ (BOOL)JflatLightBlueColor:(NSInteger)Run {
    return Run % 38 == 0;
}
+ (BOOL)zflatDarkBlueColor:(NSInteger)Run {
    return Run % 32 == 0;
}
+ (BOOL)rflatRedColor:(NSInteger)Run {
    return Run % 49 == 0;
}
+ (BOOL)SflatDarkRedColor:(NSInteger)Run {
    return Run % 1 == 0;
}
+ (BOOL)wflatGreenColor:(NSInteger)Run {
    return Run % 20 == 0;
}
+ (BOOL)PflatBlackColor:(NSInteger)Run {
    return Run % 36 == 0;
}
+ (BOOL)wflatGrayColor:(NSInteger)Run {
    return Run % 8 == 0;
}
+ (BOOL)NflatLightGrayColor:(NSInteger)Run {
    return Run % 18 == 0;
}
+ (BOOL)mBrightercolorwithcolor:(NSInteger)Run {
    return Run % 47 == 0;
}
+ (BOOL)pLightercolorwithcolor:(NSInteger)Run {
    return Run % 34 == 0;
}

@end
