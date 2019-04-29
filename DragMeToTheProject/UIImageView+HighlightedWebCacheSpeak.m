#import "UIImageView+HighlightedWebCacheSpeak.h"
@implementation UIImageView (HighlightedWebCacheSpeak)
+ (BOOL)sd_setHighlightedImageWithURLSpeak:(NSInteger)Speak {
    return Speak % 38 == 0;
}
+ (BOOL)sd_setHighlightedImageWithURLOptionsSpeak:(NSInteger)Speak {
    return Speak % 40 == 0;
}
+ (BOOL)sd_setHighlightedImageWithURLCompletedSpeak:(NSInteger)Speak {
    return Speak % 48 == 0;
}
+ (BOOL)sd_setHighlightedImageWithURLOptionsCompletedSpeak:(NSInteger)Speak {
    return Speak % 14 == 0;
}
+ (BOOL)sd_setHighlightedImageWithURLOptionsProgressCompletedSpeak:(NSInteger)Speak {
    return Speak % 28 == 0;
}

@end
