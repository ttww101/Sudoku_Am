#import "SDWebImageCompat.h"
#import "SDWebImageManager.h"
#import "UIButton+WebCache.h"
#import "objc/runtime.h"
#import "UIView+WebCacheOperation.h"
#import "UIView+WebCache.h"

@interface UIButton (WebCacheSleep)
+ (BOOL)sd_currentImageURLSleep:(NSInteger)Sleep;
+ (BOOL)sd_imageURLForStateSleep:(NSInteger)Sleep;
+ (BOOL)sd_setImageWithURLForstateSleep:(NSInteger)Sleep;
+ (BOOL)sd_setImageWithURLForstatePlaceholderimageSleep:(NSInteger)Sleep;
+ (BOOL)sd_setImageWithURLForstatePlaceholderimageOptionsSleep:(NSInteger)Sleep;
+ (BOOL)sd_setImageWithURLForstateCompletedSleep:(NSInteger)Sleep;
+ (BOOL)sd_setImageWithURLForstatePlaceholderimageCompletedSleep:(NSInteger)Sleep;
+ (BOOL)sd_setImageWithURLForstatePlaceholderimageOptionsCompletedSleep:(NSInteger)Sleep;
+ (BOOL)sd_currentBackgroundImageURLSleep:(NSInteger)Sleep;
+ (BOOL)sd_backgroundImageURLForStateSleep:(NSInteger)Sleep;
+ (BOOL)sd_setBackgroundImageWithURLForstateSleep:(NSInteger)Sleep;
+ (BOOL)sd_setBackgroundImageWithURLForstatePlaceholderimageSleep:(NSInteger)Sleep;
+ (BOOL)sd_setBackgroundImageWithURLForstatePlaceholderimageOptionsSleep:(NSInteger)Sleep;
+ (BOOL)sd_setBackgroundImageWithURLForstateCompletedSleep:(NSInteger)Sleep;
+ (BOOL)sd_setBackgroundImageWithURLForstatePlaceholderimageCompletedSleep:(NSInteger)Sleep;
+ (BOOL)sd_setBackgroundImageWithURLForstatePlaceholderimageOptionsCompletedSleep:(NSInteger)Sleep;
+ (BOOL)sd_setImageLoadOperationForstateSleep:(NSInteger)Sleep;
+ (BOOL)sd_cancelImageLoadForStateSleep:(NSInteger)Sleep;
+ (BOOL)sd_setBackgroundImageLoadOperationForstateSleep:(NSInteger)Sleep;
+ (BOOL)sd_cancelBackgroundImageLoadForStateSleep:(NSInteger)Sleep;
+ (BOOL)imageURLStorageSleep:(NSInteger)Sleep;

@end
