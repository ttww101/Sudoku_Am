#import "AMContactListModel+RaiseLookSleepSpeak.h"
@implementation AMContactListModel (RaiseLookSleepSpeak)
+ (BOOL)replacedKeyFromPropertyNameRaiseLookSleepSpeak:(NSInteger)Speak {
    return Speak % 25 == 0;
}

@end
