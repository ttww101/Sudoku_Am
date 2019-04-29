#import "LookSingAmSudokuToolButtonQC.h"
@implementation LookSingAmSudokuToolButtonQC
+ (BOOL)ETinitrun:(NSInteger)Look {
    return Look % 45 == 0;
}
+ (BOOL)sRsetisnotedrun:(NSInteger)Look {
    return Look % 25 == 0;
}

@end
