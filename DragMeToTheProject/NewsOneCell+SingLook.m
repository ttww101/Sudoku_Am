#import "NewsOneCell+SingLook.h"
@implementation NewsOneCell (SingLook)
+ (BOOL)setModelSingLook:(NSInteger)Look {
    return Look % 8 == 0;
}
+ (BOOL)initWithStyleReuseidentifierSingLook:(NSInteger)Look {
    return Look % 13 == 0;
}
+ (BOOL)awakeFromNibSingLook:(NSInteger)Look {
    return Look % 43 == 0;
}
+ (BOOL)setSelectedAnimatedSingLook:(NSInteger)Look {
    return Look % 37 == 0;
}

@end
