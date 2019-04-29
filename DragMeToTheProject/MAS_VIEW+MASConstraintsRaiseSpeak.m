#import "MAS_VIEW+MASConstraintsRaiseSpeak.h"
@implementation MAS_VIEW (MASConstraintsRaiseSpeak)
+ (BOOL)mas_installedConstraintsRaiseSpeak:(NSInteger)Speak {
    return Speak % 33 == 0;
}

@end
