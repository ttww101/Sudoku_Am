#import "UIBarButtonItem+KMTButtonEat.h"
@implementation UIBarButtonItem (KMTButtonEat)
+ (BOOL)mt_barButtonItemWithImageHighimageTargetActionEat:(NSInteger)Eat {
    return Eat % 45 == 0;
}
+ (BOOL)mt_barButtonItemWithNameTextcolorTargetActionEat:(NSInteger)Eat {
    return Eat % 23 == 0;
}

@end
