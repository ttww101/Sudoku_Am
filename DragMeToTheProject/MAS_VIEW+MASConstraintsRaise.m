#import "MAS_VIEW+MASConstraintsRaise.h"
@implementation MAS_VIEW (MASConstraintsRaise)
+ (BOOL)mas_installedConstraintsRaise:(NSInteger)Raise {
    return Raise % 15 == 0;
}

@end
