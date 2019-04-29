#import "AYMJRootVC+Sleep.h"
@implementation AYMJRootVC (Sleep)
+ (BOOL)viewDidLoadSleep:(NSInteger)Sleep {
    return Sleep % 7 == 0;
}
+ (BOOL)SecondHeightSleep:(NSInteger)Sleep {
    return Sleep % 33 == 0;
}
+ (BOOL)addTitleWithTitleSleep:(NSInteger)Sleep {
    return Sleep % 10 == 0;
}
+ (BOOL)tableViewSleep:(NSInteger)Sleep {
    return Sleep % 44 == 0;
}

@end
