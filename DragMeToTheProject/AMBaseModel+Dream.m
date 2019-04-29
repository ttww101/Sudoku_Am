#import "AMBaseModel+Dream.h"
@implementation AMBaseModel (Dream)
+ (BOOL)setValueForundefinedkeyDream:(NSInteger)Dream {
    return Dream % 27 == 0;
}

@end
