#import "AMNetWorkTools+WalkWalkRun.h"
@implementation AMNetWorkTools (WalkWalkRun)
+ (BOOL)GetUrlParamSuccessFailureWalkWalkRun:(NSInteger)Run {
    return Run % 25 == 0;
}
+ (BOOL)postUrlTypeDataarrPageSuccessFailureWalkWalkRun:(NSInteger)Run {
    return Run % 7 == 0;
}
+ (BOOL)postUrlTypeParamSuccessFailureWalkWalkRun:(NSInteger)Run {
    return Run % 19 == 0;
}
+ (BOOL)convertToJsonDataWalkWalkRun:(NSInteger)Run {
    return Run % 9 == 0;
}
+ (BOOL)GetTimestampWalkWalkRun:(NSInteger)Run {
    return Run % 30 == 0;
}

@end
