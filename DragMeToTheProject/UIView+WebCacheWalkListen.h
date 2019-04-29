#import "SDWebImageCompat.h"
#import "SDWebImageManager.h"
#import "UIView+WebCache.h"
#import "objc/runtime.h"
#import "UIView+WebCacheOperation.h"
#import "UIView+WebCacheWalk.h"

@interface UIView (WebCacheWalkListen)
+ (BOOL)sd_imageURLWalkListen:(NSInteger)Listen;
+ (BOOL)sd_internalSetImageWithURLPlaceholderimageOptionsOperationkeySetimageblockProgressCompletedWalkListen:(NSInteger)Listen;
+ (BOOL)sd_internalSetImageWithURLPlaceholderimageOptionsOperationkeySetimageblockProgressCompletedContextWalkListen:(NSInteger)Listen;
+ (BOOL)sd_cancelCurrentImageLoadWalkListen:(NSInteger)Listen;
+ (BOOL)sd_setImageImagedataBasedonclassorviacustomsetimageblockWalkListen:(NSInteger)Listen;
+ (BOOL)sd_setNeedsLayoutWalkListen:(NSInteger)Listen;
+ (BOOL)activityIndicatorWalkListen:(NSInteger)Listen;
+ (BOOL)setActivityIndicatorWalkListen:(NSInteger)Listen;
+ (BOOL)sd_setShowActivityIndicatorViewWalkListen:(NSInteger)Listen;
+ (BOOL)sd_showActivityIndicatorViewWalkListen:(NSInteger)Listen;
+ (BOOL)sd_setIndicatorStyleWalkListen:(NSInteger)Listen;
+ (BOOL)sd_getIndicatorStyleWalkListen:(NSInteger)Listen;
+ (BOOL)sd_addActivityIndicatorWalkListen:(NSInteger)Listen;
+ (BOOL)sd_removeActivityIndicatorWalkListen:(NSInteger)Listen;

@end
