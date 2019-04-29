#import "AmSudokuToolButton+RunSleepDrinkSleep.h"
@implementation AmSudokuToolButton (RunSleepDrinkSleep)
+ (BOOL)initRunSleepDrinkSleep:(NSInteger)Sleep {
    return Sleep % 29 == 0;
}
+ (BOOL)setIsNotedRunSleepDrinkSleep:(NSInteger)Sleep {
    return Sleep % 37 == 0;
}

@end
