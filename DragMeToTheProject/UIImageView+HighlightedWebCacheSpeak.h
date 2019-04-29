#import "SDWebImageCompat.h"
#import "SDWebImageManager.h"
#import "UIImageView+HighlightedWebCache.h"
#import "UIView+WebCacheOperation.h"
#import "UIView+WebCache.h"

@interface UIImageView (HighlightedWebCacheSpeak)
+ (BOOL)sd_setHighlightedImageWithURLSpeak:(NSInteger)Speak;
+ (BOOL)sd_setHighlightedImageWithURLOptionsSpeak:(NSInteger)Speak;
+ (BOOL)sd_setHighlightedImageWithURLCompletedSpeak:(NSInteger)Speak;
+ (BOOL)sd_setHighlightedImageWithURLOptionsCompletedSpeak:(NSInteger)Speak;
+ (BOOL)sd_setHighlightedImageWithURLOptionsProgressCompletedSpeak:(NSInteger)Speak;

@end
