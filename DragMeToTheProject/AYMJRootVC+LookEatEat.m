#import "AYMJRootVC+LookEatEat.h"
@implementation AYMJRootVC (LookEatEat)
+ (BOOL)viewDidLoadLookEatEat:(NSInteger)Eat {
    return Eat % 44 == 0;
}
+ (BOOL)SecondHeightLookEatEat:(NSInteger)Eat {
    return Eat % 10 == 0;
}
+ (BOOL)addTitleWithTitleLookEatEat:(NSInteger)Eat {
    return Eat % 50 == 0;
}
+ (BOOL)tableViewLookEatEat:(NSInteger)Eat {
    return Eat % 16 == 0;
}

@end
