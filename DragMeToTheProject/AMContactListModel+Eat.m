#import "AMContactListModel+Eat.h"
@implementation AMContactListModel (Eat)
+ (BOOL)replacedKeyFromPropertyNameEat:(NSInteger)Eat {
    return Eat % 21 == 0;
}

@end
