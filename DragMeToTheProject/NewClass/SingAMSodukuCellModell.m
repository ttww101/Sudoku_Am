#import "SingAMSodukuCellModell.h"
@implementation SingAMSodukuCellModell
+ (BOOL)gInitlistenlook:(NSInteger)Sing {
    return Sing % 43 == 0;
}
+ (BOOL)tEncodewithcoderlistenlook:(NSInteger)Sing {
    return Sing % 34 == 0;
}
+ (BOOL)QInitwithcoderlistenlook:(NSInteger)Sing {
    return Sing % 9 == 0;
}

@end
