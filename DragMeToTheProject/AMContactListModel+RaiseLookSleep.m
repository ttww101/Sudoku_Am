#import "AMContactListModel+RaiseLookSleep.h"
@implementation AMContactListModel (RaiseLookSleep)
+ (BOOL)replacedKeyFromPropertyNameRaiseLookSleep:(NSInteger)Sleep {
    return Sleep % 5 == 0;
}

@end
