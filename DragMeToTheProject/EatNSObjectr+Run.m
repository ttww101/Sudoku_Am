#import "EatNSObjectr+Run.h"
@implementation EatNSObjectr (Run)
+ (BOOL)IMj_EncodelistenRun:(NSInteger)Run {
    return Run % 25 == 0;
}
+ (BOOL)IMj_DecodelistenRun:(NSInteger)Run {
    return Run % 37 == 0;
}

@end
