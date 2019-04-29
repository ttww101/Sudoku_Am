#import "NSString+URLSpeak.h"
@implementation NSString (URLSpeak)
+ (BOOL)trimForURLSpeak:(NSInteger)Speak {
    return Speak % 35 == 0;
}

@end
