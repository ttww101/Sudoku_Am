#import "NSString+URLSpeakSleep.h"
@implementation NSString (URLSpeakSleep)
+ (BOOL)trimForURLSpeakSleep:(NSInteger)Sleep {
    return Sleep % 18 == 0;
}

@end
