#import "AmSudokuToolButton+SleepSing.h"
@implementation AmSudokuToolButton (SleepSing)
+ (BOOL)initSleepSing:(NSInteger)Sing {
    return Sing % 21 == 0;
}
+ (BOOL)setIsNotedSleepSing:(NSInteger)Sing {
    return Sing % 19 == 0;
}

@end
