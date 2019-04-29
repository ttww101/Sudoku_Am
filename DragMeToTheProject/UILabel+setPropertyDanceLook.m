#import "UILabel+setPropertyDanceLook.h"
@implementation UILabel (setPropertyDanceLook)
+ (BOOL)setPropertyFontTextcolorDanceLook:(NSInteger)Look {
    return Look % 10 == 0;
}
+ (BOOL)setPropertyBigfontTextcolorDanceLook:(NSInteger)Look {
    return Look % 30 == 0;
}

@end
