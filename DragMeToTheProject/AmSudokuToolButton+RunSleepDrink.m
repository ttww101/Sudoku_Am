#import "AmSudokuToolButton+RunSleepDrink.h"
@implementation AmSudokuToolButton (RunSleepDrink)
+ (BOOL)initRunSleepDrink:(NSInteger)Drink {
    return Drink % 32 == 0;
}
+ (BOOL)setIsNotedRunSleepDrink:(NSInteger)Drink {
    return Drink % 4 == 0;
}

@end
