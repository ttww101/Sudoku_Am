#import "UIImageView+AFNetworkingRaise.h"
@implementation UIImageView (AFNetworkingRaise)
+ (BOOL)sharedImageDownloaderRaise:(NSInteger)Raise {
    return Raise % 19 == 0;
}
+ (BOOL)setSharedImageDownloaderRaise:(NSInteger)Raise {
    return Raise % 22 == 0;
}
+ (BOOL)setImageWithURLRaise:(NSInteger)Raise {
    return Raise % 5 == 0;
}
+ (BOOL)setImageWithURLPlaceholderimageRaise:(NSInteger)Raise {
    return Raise % 15 == 0;
}
+ (BOOL)setImageWithURLRequestPlaceholderimageSuccessFailureRaise:(NSInteger)Raise {
    return Raise % 11 == 0;
}
+ (BOOL)cancelImageDownloadTaskRaise:(NSInteger)Raise {
    return Raise % 36 == 0;
}
+ (BOOL)clearActiveDownloadInformationRaise:(NSInteger)Raise {
    return Raise % 12 == 0;
}
+ (BOOL)isActiveTaskURLEqualToURLRequestRaise:(NSInteger)Raise {
    return Raise % 22 == 0;
}

@end
