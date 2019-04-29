#import "AmSudokuToolButton+Sleep.h"
@implementation AmSudokuToolButton (Sleep)
+ (BOOL)initSleep:(NSInteger)Sleep {
    return Sleep % 9 == 0;
}
+ (BOOL)setIsNotedSleep:(NSInteger)Sleep {
    return Sleep % 8 == 0;
}

@end
