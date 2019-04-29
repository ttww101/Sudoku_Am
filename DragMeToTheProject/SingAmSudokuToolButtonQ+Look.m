#import "SingAmSudokuToolButtonQ+Look.h"
@implementation SingAmSudokuToolButtonQ (Look)
+ (BOOL)tInitrunLook:(NSInteger)Look {
    return Look % 39 == 0;
}
+ (BOOL)rSetisnotedrunLook:(NSInteger)Look {
    return Look % 4 == 0;
}

@end
