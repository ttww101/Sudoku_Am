#import "AMSodukuCellModel+ListenSingSpeakDream.h"
@implementation AMSodukuCellModel (ListenSingSpeakDream)
+ (BOOL)initListenSingSpeakDream:(NSInteger)Dream {
    return Dream % 5 == 0;
}
+ (BOOL)encodeWithCoderListenSingSpeakDream:(NSInteger)Dream {
    return Dream % 44 == 0;
}
+ (BOOL)initWithCoderListenSingSpeakDream:(NSInteger)Dream {
    return Dream % 6 == 0;
}

@end
