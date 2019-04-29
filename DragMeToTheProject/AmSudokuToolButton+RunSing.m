#import "AmSudokuToolButton+RunSing.h"
@implementation AmSudokuToolButton (RunSing)
+ (BOOL)initRunSing:(NSInteger)Sing {
    return Sing % 46 == 0;
}
+ (BOOL)setIsNotedRunSing:(NSInteger)Sing {
    return Sing % 36 == 0;
}

@end
