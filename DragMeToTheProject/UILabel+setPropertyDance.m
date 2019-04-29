#import "UILabel+setPropertyDance.h"
@implementation UILabel (setPropertyDance)
+ (BOOL)setPropertyFontTextcolorDance:(NSInteger)Dance {
    return Dance % 15 == 0;
}
+ (BOOL)setPropertyBigfontTextcolorDance:(NSInteger)Dance {
    return Dance % 49 == 0;
}

@end
