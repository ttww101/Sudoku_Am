#import "SleepAmSudokuToolButtonN+Dance.h"
@implementation SleepAmSudokuToolButtonN (Dance)
+ (BOOL)zinitDance:(NSInteger)Dance {
    return Dance % 15 == 0;
}
+ (BOOL)tSetisnotedDance:(NSInteger)Dance {
    return Dance % 41 == 0;
}

@end
