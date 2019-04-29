#import "MJFoundation+Raise.h"
@implementation MJFoundation (Raise)
+ (BOOL)foundationClassesRaise:(NSInteger)Raise {
    return Raise % 31 == 0;
}
+ (BOOL)isClassFromFoundationRaise:(NSInteger)Raise {
    return Raise % 19 == 0;
}

@end
