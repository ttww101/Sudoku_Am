#import "SDWebImageCompat.h"
#import "SDWebImageManager.h"
#import "UIView+WebCacheOperation.h"
#import "objc/runtime.h"

@interface UIView (WebCacheOperationSpeak)
+ (BOOL)operationDictionarySpeak:(NSInteger)Speak;
+ (BOOL)sd_setImageLoadOperationForkeySpeak:(NSInteger)Speak;
+ (BOOL)sd_cancelImageLoadOperationWithKeySpeak:(NSInteger)Speak;
+ (BOOL)sd_removeImageLoadOperationWithKeySpeak:(NSInteger)Speak;

@end
