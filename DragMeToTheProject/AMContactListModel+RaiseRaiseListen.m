#import "AMContactListModel+RaiseRaiseListen.h"
@implementation AMContactListModel (RaiseRaiseListen)
+ (BOOL)replacedKeyFromPropertyNameRaiseRaiseListen:(NSInteger)Listen {
    return Listen % 6 == 0;
}

@end
