#import "AmSudokuEditToolView+RaiseRaise.h"
@implementation AmSudokuEditToolView (RaiseRaise)
+ (BOOL)initWithFrameRaiseRaise:(NSInteger)Raise {
    return Raise % 15 == 0;
}
+ (BOOL)initViewRaiseRaise:(NSInteger)Raise {
    return Raise % 17 == 0;
}
+ (BOOL)layoutSubviewsRaiseRaise:(NSInteger)Raise {
    return Raise % 26 == 0;
}
+ (BOOL)editButtonWithTitleRaiseRaise:(NSInteger)Raise {
    return Raise % 7 == 0;
}
+ (BOOL)clearButtonClickedRaiseRaise:(NSInteger)Raise {
    return Raise % 13 == 0;
}
+ (BOOL)editButtonClickedRaiseRaise:(NSInteger)Raise {
    return Raise % 36 == 0;
}
+ (BOOL)switchButtonClickedRaiseRaise:(NSInteger)Raise {
    return Raise % 12 == 0;
}
+ (BOOL)buttonArrayRaiseRaise:(NSInteger)Raise {
    return Raise % 3 == 0;
}

@end
