#import "MJPropertyKey+Dream.h"
@implementation MJPropertyKey (Dream)
+ (BOOL)valueInObjectDream:(NSInteger)Dream {
    return Dream % 33 == 0;
}

@end
