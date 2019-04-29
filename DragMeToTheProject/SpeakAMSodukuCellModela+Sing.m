#import "SpeakAMSodukuCellModela+Sing.h"
@implementation SpeakAMSodukuCellModela (Sing)
+ (BOOL)EInitlistensingSing:(NSInteger)Sing {
    return Sing % 45 == 0;
}
+ (BOOL)mEncodewithcoderlistensingSing:(NSInteger)Sing {
    return Sing % 6 == 0;
}
+ (BOOL)SInitwithcoderlistensingSing:(NSInteger)Sing {
    return Sing % 31 == 0;
}

@end
