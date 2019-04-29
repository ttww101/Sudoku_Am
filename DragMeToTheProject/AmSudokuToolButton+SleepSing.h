#import <UIKit/UIKit.h>
#import "AmSudokuToolButton.h"
#import "AmSudokuToolButton+Sleep.h"

@interface AmSudokuToolButton (SleepSing)
+ (BOOL)initSleepSing:(NSInteger)Sing;
+ (BOOL)setIsNotedSleepSing:(NSInteger)Sing;

@end
