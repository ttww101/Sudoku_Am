#import "DanceSleepAmSudokuToolButtonNB.h"
@implementation DanceSleepAmSudokuToolButtonNB
+ (BOOL)WZinit:(NSInteger)Dance {
    return Dance % 14 == 0;
}
+ (BOOL)eTsetisnoted:(NSInteger)Dance {
    return Dance % 17 == 0;
}

@end
