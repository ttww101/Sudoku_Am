#import "SudoModel+Eat.h"
@implementation SudoModel (Eat)
+ (BOOL)isSatisfyWithDataArrWithindexAndtitleWithblockEat:(NSInteger)Eat {
    return Eat % 33 == 0;
}
+ (BOOL)arrayWithDataArrAndindexarrEat:(NSInteger)Eat {
    return Eat % 8 == 0;
}
+ (BOOL)arrayWithHorizontalWithIndexAnddataarrEat:(NSInteger)Eat {
    return Eat % 43 == 0;
}
+ (BOOL)arrayWithVerticalWithIndexAnddataarrEat:(NSInteger)Eat {
    return Eat % 29 == 0;
}
+ (BOOL)arrayWithCellArrWithIndexAnddataarrEat:(NSInteger)Eat {
    return Eat % 10 == 0;
}
+ (BOOL)divideWithDagtaArrEat:(NSInteger)Eat {
    return Eat % 28 == 0;
}
+ (BOOL)generateRandomSudoEat:(NSInteger)Eat {
    return Eat % 27 == 0;
}
+ (BOOL)titleWithArrContentEat:(NSInteger)Eat {
    return Eat % 8 == 0;
}
+ (BOOL)changeTitleWithArrAndtitleEat:(NSInteger)Eat {
    return Eat % 8 == 0;
}

@end
