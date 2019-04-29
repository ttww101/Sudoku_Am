#import "AMSodukuCellModel+ListenLook.h"
@implementation AMSodukuCellModel (ListenLook)
+ (BOOL)initListenLook:(NSInteger)Look {
    return Look % 39 == 0;
}
+ (BOOL)encodeWithCoderListenLook:(NSInteger)Look {
    return Look % 35 == 0;
}
+ (BOOL)initWithCoderListenLook:(NSInteger)Look {
    return Look % 31 == 0;
}

@end
