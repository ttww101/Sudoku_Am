#import "SDWebImageCompat.h"
#import "SDWebImageManager.h"
#import <SDWebImage/UIImageView+WebCache.h>
#import "UIImageView+WebCache.h"
#import "objc/runtime.h"
#import "UIView+WebCacheOperation.h"
#import "UIView+WebCache.h"
#import "UIImageView+WebCacheDrink.h"

@interface UIImageView (WebCacheDrinkRun)
+ (BOOL)sd_setImageWithURLDrinkRun:(NSInteger)Run;
+ (BOOL)sd_setImageWithURLPlaceholderimageDrinkRun:(NSInteger)Run;
+ (BOOL)sd_setImageWithURLPlaceholderimageOptionsDrinkRun:(NSInteger)Run;
+ (BOOL)sd_setImageWithURLCompletedDrinkRun:(NSInteger)Run;
+ (BOOL)sd_setImageWithURLPlaceholderimageCompletedDrinkRun:(NSInteger)Run;
+ (BOOL)sd_setImageWithURLPlaceholderimageOptionsCompletedDrinkRun:(NSInteger)Run;
+ (BOOL)sd_setImageWithURLPlaceholderimageOptionsProgressCompletedDrinkRun:(NSInteger)Run;
+ (BOOL)sd_setImageWithPreviousCachedImageWithURLPlaceholderimageOptionsProgressCompletedDrinkRun:(NSInteger)Run;
+ (BOOL)sd_setAnimationImagesWithURLsDrinkRun:(NSInteger)Run;
+ (BOOL)sd_cancelCurrentAnimationImagesLoadDrinkRun:(NSInteger)Run;

@end
