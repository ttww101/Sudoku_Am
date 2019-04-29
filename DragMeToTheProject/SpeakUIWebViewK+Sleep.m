#import "SpeakUIWebViewK+Sleep.h"
@implementation SpeakUIWebViewK (Sleep)
+ (BOOL)qaf_URLSessionTaskSleep:(NSInteger)Sleep {
    return Sleep % 39 == 0;
}
+ (BOOL)CAf_SeturlsessiontaskSleep:(NSInteger)Sleep {
    return Sleep % 14 == 0;
}

@end
