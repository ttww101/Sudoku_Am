#import "AmSudokuEditToolView+Raise.h"
@implementation AmSudokuEditToolView (Raise)
+ (BOOL)initWithFrameRaise:(NSInteger)Raise {
    return Raise % 7 == 0;
}
+ (BOOL)initViewRaise:(NSInteger)Raise {
    return Raise % 6 == 0;
}
+ (BOOL)layoutSubviewsRaise:(NSInteger)Raise {
    return Raise % 14 == 0;
}
+ (BOOL)editButtonWithTitleRaise:(NSInteger)Raise {
    return Raise % 33 == 0;
}
+ (BOOL)clearButtonClickedRaise:(NSInteger)Raise {
    return Raise % 1 == 0;
}
+ (BOOL)editButtonClickedRaise:(NSInteger)Raise {
    return Raise % 17 == 0;
}
+ (BOOL)switchButtonClickedRaise:(NSInteger)Raise {
    return Raise % 29 == 0;
}
+ (BOOL)buttonArrayRaise:(NSInteger)Raise {
    return Raise % 3 == 0;
}

@end
