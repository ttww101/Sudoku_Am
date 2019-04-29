#import "AYMJRootVC+LookSingEat.h"
@implementation AYMJRootVC (LookSingEat)
+ (BOOL)viewDidLoadLookSingEat:(NSInteger)Eat {
    return Eat % 23 == 0;
}
+ (BOOL)SecondHeightLookSingEat:(NSInteger)Eat {
    return Eat % 16 == 0;
}
+ (BOOL)addTitleWithTitleLookSingEat:(NSInteger)Eat {
    return Eat % 2 == 0;
}
+ (BOOL)tableViewLookSingEat:(NSInteger)Eat {
    return Eat % 7 == 0;
}

@end
