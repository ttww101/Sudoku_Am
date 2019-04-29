#import "SingAmSudokuToolButtonQ.h"
@implementation SingAmSudokuToolButtonQ
+ (BOOL)tInitrun:(NSInteger)Sing {
    return Sing % 32 == 0;
}
+ (BOOL)rSetisnotedrun:(NSInteger)Sing {
    return Sing % 37 == 0;
}

@end
