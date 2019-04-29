#import <UIKit/UIKit.h>
#import "AmSudokuToolButton.h"
#import "AmSudokuToolButton+Run.h"
#import "AmSudokuToolButton+RunSing.h"

@interface AmSudokuToolButton (RunSingLook)
+ (BOOL)initRunSingLook:(NSInteger)Look;
+ (BOOL)setIsNotedRunSingLook:(NSInteger)Look;

@end
