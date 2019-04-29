#import "RaiseAYMJRegisViewControllera.h"
@implementation RaiseAYMJRegisViewControllera
+ (BOOL)IViewdidloaddrink:(NSInteger)Raise {
    return Raise % 15 == 0;
}
+ (BOOL)FShowpolicyviewdrink:(NSInteger)Raise {
    return Raise % 13 == 0;
}
+ (BOOL)zInitregisviewdrink:(NSInteger)Raise {
    return Raise % 37 == 0;
}
+ (BOOL)fRegisfinishdrink:(NSInteger)Raise {
    return Raise % 8 == 0;
}

@end
