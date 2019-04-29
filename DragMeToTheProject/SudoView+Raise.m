#import "SudoView+Raise.h"
@implementation SudoView (Raise)
+ (BOOL)initlizeIndexArrRaise:(NSInteger)Raise {
    return Raise % 19 == 0;
}
+ (BOOL)oldTitleArrRaise:(NSInteger)Raise {
    return Raise % 49 == 0;
}
+ (BOOL)dataArrRaise:(NSInteger)Raise {
    return Raise % 10 == 0;
}
+ (BOOL)initWithFrameRaise:(NSInteger)Raise {
    return Raise % 27 == 0;
}
+ (BOOL)createViewWithFrameRaise:(NSInteger)Raise {
    return Raise % 5 == 0;
}
+ (BOOL)createWithBegainAndindexRaise:(NSInteger)Raise {
    return Raise % 27 == 0;
}
+ (BOOL)buttonChooseRaise:(NSInteger)Raise {
    return Raise % 40 == 0;
}
+ (BOOL)SuccessRaise:(NSInteger)Raise {
    return Raise % 13 == 0;
}
+ (BOOL)createButtonViewWithFrameRaise:(NSInteger)Raise {
    return Raise % 43 == 0;
}
+ (BOOL)titleChooseRaise:(NSInteger)Raise {
    return Raise % 32 == 0;
}
+ (BOOL)refreshRaise:(NSInteger)Raise {
    return Raise % 39 == 0;
}
+ (BOOL)getNewDataRaise:(NSInteger)Raise {
    return Raise % 16 == 0;
}
+ (BOOL)drawRectRaise:(NSInteger)Raise {
    return Raise % 18 == 0;
}

@end
