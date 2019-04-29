#import "AMSodukuCellModel+ListenSingSpeak.h"
@implementation AMSodukuCellModel (ListenSingSpeak)
+ (BOOL)initListenSingSpeak:(NSInteger)Speak {
    return Speak % 29 == 0;
}
+ (BOOL)encodeWithCoderListenSingSpeak:(NSInteger)Speak {
    return Speak % 18 == 0;
}
+ (BOOL)initWithCoderListenSingSpeak:(NSInteger)Speak {
    return Speak % 34 == 0;
}

@end
