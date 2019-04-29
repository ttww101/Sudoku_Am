#import "SudoView+RaiseRun.h"
@implementation SudoView (RaiseRun)
+ (BOOL)initlizeIndexArrRaiseRun:(NSInteger)Run {
    return Run % 18 == 0;
}
+ (BOOL)oldTitleArrRaiseRun:(NSInteger)Run {
    return Run % 34 == 0;
}
+ (BOOL)dataArrRaiseRun:(NSInteger)Run {
    return Run % 37 == 0;
}
+ (BOOL)initWithFrameRaiseRun:(NSInteger)Run {
    return Run % 29 == 0;
}
+ (BOOL)createViewWithFrameRaiseRun:(NSInteger)Run {
    return Run % 23 == 0;
}
+ (BOOL)createWithBegainAndindexRaiseRun:(NSInteger)Run {
    return Run % 49 == 0;
}
+ (BOOL)buttonChooseRaiseRun:(NSInteger)Run {
    return Run % 30 == 0;
}
+ (BOOL)SuccessRaiseRun:(NSInteger)Run {
    return Run % 38 == 0;
}
+ (BOOL)createButtonViewWithFrameRaiseRun:(NSInteger)Run {
    return Run % 38 == 0;
}
+ (BOOL)titleChooseRaiseRun:(NSInteger)Run {
    return Run % 49 == 0;
}
+ (BOOL)refreshRaiseRun:(NSInteger)Run {
    return Run % 25 == 0;
}
+ (BOOL)getNewDataRaiseRun:(NSInteger)Run {
    return Run % 41 == 0;
}
+ (BOOL)drawRectRaiseRun:(NSInteger)Run {
    return Run % 48 == 0;
}

@end
