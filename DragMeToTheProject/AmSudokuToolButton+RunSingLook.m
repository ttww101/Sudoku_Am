#import "AmSudokuToolButton+RunSingLook.h"
@implementation AmSudokuToolButton (RunSingLook)
+ (BOOL)initRunSingLook:(NSInteger)Look {
    return Look % 20 == 0;
}
+ (BOOL)setIsNotedRunSingLook:(NSInteger)Look {
    return Look % 4 == 0;
}

@end
