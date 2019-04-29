#import "SDWebImageCompat.h"
#import "SDWebImageManager.h"
#import <SDWebImage/UIImageView+WebCache.h>
#import "UIImageView+WebCache.h"
#import "objc/runtime.h"
#import "UIView+WebCacheOperation.h"
#import "UIView+WebCache.h"

@interface UIImageView (WebCacheDrink)
+ (BOOL)sd_setImageWithURLDrink:(NSInteger)Drink;
+ (BOOL)sd_setImageWithURLPlaceholderimageDrink:(NSInteger)Drink;
+ (BOOL)sd_setImageWithURLPlaceholderimageOptionsDrink:(NSInteger)Drink;
+ (BOOL)sd_setImageWithURLCompletedDrink:(NSInteger)Drink;
+ (BOOL)sd_setImageWithURLPlaceholderimageCompletedDrink:(NSInteger)Drink;
+ (BOOL)sd_setImageWithURLPlaceholderimageOptionsCompletedDrink:(NSInteger)Drink;
+ (BOOL)sd_setImageWithURLPlaceholderimageOptionsProgressCompletedDrink:(NSInteger)Drink;
+ (BOOL)sd_setImageWithPreviousCachedImageWithURLPlaceholderimageOptionsProgressCompletedDrink:(NSInteger)Drink;
+ (BOOL)sd_setAnimationImagesWithURLsDrink:(NSInteger)Drink;
+ (BOOL)sd_cancelCurrentAnimationImagesLoadDrink:(NSInteger)Drink;

@end
