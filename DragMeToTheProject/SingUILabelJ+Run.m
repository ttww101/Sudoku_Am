#import "SingUILabelJ+Run.h"
@implementation SingUILabelJ (Run)
+ (BOOL)Wmj_labelRun:(NSInteger)Run {
    return Run % 27 == 0;
}
+ (BOOL)Gmj_textWithRun:(NSInteger)Run {
    return Run % 13 == 0;
}

@end
