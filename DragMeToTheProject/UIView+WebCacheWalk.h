#import "SDWebImageCompat.h"
#import "SDWebImageManager.h"
#import "UIView+WebCache.h"
#import "objc/runtime.h"
#import "UIView+WebCacheOperation.h"

@interface UIView (WebCacheWalk)
+ (BOOL)sd_imageURLWalk:(NSInteger)Walk;
+ (BOOL)sd_internalSetImageWithURLPlaceholderimageOptionsOperationkeySetimageblockProgressCompletedWalk:(NSInteger)Walk;
+ (BOOL)sd_internalSetImageWithURLPlaceholderimageOptionsOperationkeySetimageblockProgressCompletedContextWalk:(NSInteger)Walk;
+ (BOOL)sd_cancelCurrentImageLoadWalk:(NSInteger)Walk;
+ (BOOL)sd_setImageImagedataBasedonclassorviacustomsetimageblockWalk:(NSInteger)Walk;
+ (BOOL)sd_setNeedsLayoutWalk:(NSInteger)Walk;
+ (BOOL)activityIndicatorWalk:(NSInteger)Walk;
+ (BOOL)setActivityIndicatorWalk:(NSInteger)Walk;
+ (BOOL)sd_setShowActivityIndicatorViewWalk:(NSInteger)Walk;
+ (BOOL)sd_showActivityIndicatorViewWalk:(NSInteger)Walk;
+ (BOOL)sd_setIndicatorStyleWalk:(NSInteger)Walk;
+ (BOOL)sd_getIndicatorStyleWalk:(NSInteger)Walk;
+ (BOOL)sd_addActivityIndicatorWalk:(NSInteger)Walk;
+ (BOOL)sd_removeActivityIndicatorWalk:(NSInteger)Walk;

@end
