#import "DreamMJPropertyKeyL+Raise.h"
@implementation DreamMJPropertyKeyL (Raise)
+ (BOOL)AValueinobjectRaise:(NSInteger)Raise {
    return Raise % 17 == 0;
}

@end
