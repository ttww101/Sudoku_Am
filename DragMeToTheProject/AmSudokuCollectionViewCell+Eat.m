#import "AmSudokuCollectionViewCell+Eat.h"
@implementation AmSudokuCollectionViewCell (Eat)
+ (BOOL)initWithFrameEat:(NSInteger)Eat {
    return Eat % 32 == 0;
}
+ (BOOL)initViewEat:(NSInteger)Eat {
    return Eat % 39 == 0;
}
+ (BOOL)layoutSubviewsEat:(NSInteger)Eat {
    return Eat % 39 == 0;
}
+ (BOOL)setModelEat:(NSInteger)Eat {
    return Eat % 23 == 0;
}
+ (BOOL)valueLabelEat:(NSInteger)Eat {
    return Eat % 49 == 0;
}
+ (BOOL)noteLabelArrayEat:(NSInteger)Eat {
    return Eat % 14 == 0;
}
+ (BOOL)borderLayerEat:(NSInteger)Eat {
    return Eat % 50 == 0;
}

@end
