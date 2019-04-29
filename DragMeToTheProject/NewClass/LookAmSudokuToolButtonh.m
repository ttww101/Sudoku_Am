#import "LookAmSudokuToolButtonh.h"
@implementation LookAmSudokuToolButtonh
+ (BOOL)hInitrunsing:(NSInteger)Look {
    return Look % 46 == 0;
}
+ (BOOL)PSetisnotedrunsing:(NSInteger)Look {
    return Look % 9 == 0;
}

@end
