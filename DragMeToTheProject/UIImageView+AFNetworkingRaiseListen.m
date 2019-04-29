#import "UIImageView+AFNetworkingRaiseListen.h"
@implementation UIImageView (AFNetworkingRaiseListen)
+ (BOOL)sharedImageDownloaderRaiseListen:(NSInteger)Listen {
    return Listen % 8 == 0;
}
+ (BOOL)setSharedImageDownloaderRaiseListen:(NSInteger)Listen {
    return Listen % 43 == 0;
}
+ (BOOL)setImageWithURLRaiseListen:(NSInteger)Listen {
    return Listen % 23 == 0;
}
+ (BOOL)setImageWithURLPlaceholderimageRaiseListen:(NSInteger)Listen {
    return Listen % 49 == 0;
}
+ (BOOL)setImageWithURLRequestPlaceholderimageSuccessFailureRaiseListen:(NSInteger)Listen {
    return Listen % 13 == 0;
}
+ (BOOL)cancelImageDownloadTaskRaiseListen:(NSInteger)Listen {
    return Listen % 30 == 0;
}
+ (BOOL)clearActiveDownloadInformationRaiseListen:(NSInteger)Listen {
    return Listen % 40 == 0;
}
+ (BOOL)isActiveTaskURLEqualToURLRequestRaiseListen:(NSInteger)Listen {
    return Listen % 31 == 0;
}

@end
