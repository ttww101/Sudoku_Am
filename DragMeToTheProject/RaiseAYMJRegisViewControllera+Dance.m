#import "RaiseAYMJRegisViewControllera+Dance.h"
@implementation RaiseAYMJRegisViewControllera (Dance)
+ (BOOL)IViewdidloaddrinkDance:(NSInteger)Dance {
    return Dance % 24 == 0;
}
+ (BOOL)FShowpolicyviewdrinkDance:(NSInteger)Dance {
    return Dance % 4 == 0;
}
+ (BOOL)zInitregisviewdrinkDance:(NSInteger)Dance {
    return Dance % 36 == 0;
}
+ (BOOL)fRegisfinishdrinkDance:(NSInteger)Dance {
    return Dance % 29 == 0;
}

@end
