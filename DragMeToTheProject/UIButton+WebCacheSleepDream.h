#import "SDWebImageCompat.h"
#import "SDWebImageManager.h"
#import "UIButton+WebCache.h"
#import "objc/runtime.h"
#import "UIView+WebCacheOperation.h"
#import "UIView+WebCache.h"
#import "UIButton+WebCacheSleep.h"

@interface UIButton (WebCacheSleepDream)
+ (BOOL)sd_currentImageURLSleepDream:(NSInteger)Dream;
+ (BOOL)sd_imageURLForStateSleepDream:(NSInteger)Dream;
+ (BOOL)sd_setImageWithURLForstateSleepDream:(NSInteger)Dream;
+ (BOOL)sd_setImageWithURLForstatePlaceholderimageSleepDream:(NSInteger)Dream;
+ (BOOL)sd_setImageWithURLForstatePlaceholderimageOptionsSleepDream:(NSInteger)Dream;
+ (BOOL)sd_setImageWithURLForstateCompletedSleepDream:(NSInteger)Dream;
+ (BOOL)sd_setImageWithURLForstatePlaceholderimageCompletedSleepDream:(NSInteger)Dream;
+ (BOOL)sd_setImageWithURLForstatePlaceholderimageOptionsCompletedSleepDream:(NSInteger)Dream;
+ (BOOL)sd_currentBackgroundImageURLSleepDream:(NSInteger)Dream;
+ (BOOL)sd_backgroundImageURLForStateSleepDream:(NSInteger)Dream;
+ (BOOL)sd_setBackgroundImageWithURLForstateSleepDream:(NSInteger)Dream;
+ (BOOL)sd_setBackgroundImageWithURLForstatePlaceholderimageSleepDream:(NSInteger)Dream;
+ (BOOL)sd_setBackgroundImageWithURLForstatePlaceholderimageOptionsSleepDream:(NSInteger)Dream;
+ (BOOL)sd_setBackgroundImageWithURLForstateCompletedSleepDream:(NSInteger)Dream;
+ (BOOL)sd_setBackgroundImageWithURLForstatePlaceholderimageCompletedSleepDream:(NSInteger)Dream;
+ (BOOL)sd_setBackgroundImageWithURLForstatePlaceholderimageOptionsCompletedSleepDream:(NSInteger)Dream;
+ (BOOL)sd_setImageLoadOperationForstateSleepDream:(NSInteger)Dream;
+ (BOOL)sd_cancelImageLoadForStateSleepDream:(NSInteger)Dream;
+ (BOOL)sd_setBackgroundImageLoadOperationForstateSleepDream:(NSInteger)Dream;
+ (BOOL)sd_cancelBackgroundImageLoadForStateSleepDream:(NSInteger)Dream;
+ (BOOL)imageURLStorageSleepDream:(NSInteger)Dream;

@end
