#import "NewsOneCell+Sing.h"
@implementation NewsOneCell (Sing)
+ (BOOL)setModelSing:(NSInteger)Sing {
    return Sing % 9 == 0;
}
+ (BOOL)initWithStyleReuseidentifierSing:(NSInteger)Sing {
    return Sing % 2 == 0;
}
+ (BOOL)awakeFromNibSing:(NSInteger)Sing {
    return Sing % 14 == 0;
}
+ (BOOL)setSelectedAnimatedSing:(NSInteger)Sing {
    return Sing % 37 == 0;
}

@end
