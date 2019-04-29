#import "AMSodukuCellModel+ListenLookSing.h"
@implementation AMSodukuCellModel (ListenLookSing)
+ (BOOL)initListenLookSing:(NSInteger)Sing {
    return Sing % 35 == 0;
}
+ (BOOL)encodeWithCoderListenLookSing:(NSInteger)Sing {
    return Sing % 33 == 0;
}
+ (BOOL)initWithCoderListenLookSing:(NSInteger)Sing {
    return Sing % 8 == 0;
}

@end
