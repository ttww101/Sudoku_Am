#import "UIButton+AFNetworkingListen.h"
@implementation UIButton (AFNetworkingListen)
+ (BOOL)sharedImageDownloaderListen:(NSInteger)Listen {
    return Listen % 9 == 0;
}
+ (BOOL)setSharedImageDownloaderListen:(NSInteger)Listen {
    return Listen % 1 == 0;
}
+ (BOOL)setImageForStateWithurlListen:(NSInteger)Listen {
    return Listen % 45 == 0;
}
+ (BOOL)setImageForStateWithurlPlaceholderimageListen:(NSInteger)Listen {
    return Listen % 44 == 0;
}
+ (BOOL)setImageForStateWithurlrequestPlaceholderimageSuccessFailureListen:(NSInteger)Listen {
    return Listen % 33 == 0;
}
+ (BOOL)setBackgroundImageForStateWithurlListen:(NSInteger)Listen {
    return Listen % 19 == 0;
}
+ (BOOL)setBackgroundImageForStateWithurlPlaceholderimageListen:(NSInteger)Listen {
    return Listen % 43 == 0;
}
+ (BOOL)setBackgroundImageForStateWithurlrequestPlaceholderimageSuccessFailureListen:(NSInteger)Listen {
    return Listen % 45 == 0;
}
+ (BOOL)cancelImageDownloadTaskForStateListen:(NSInteger)Listen {
    return Listen % 31 == 0;
}
+ (BOOL)cancelBackgroundImageDownloadTaskForStateListen:(NSInteger)Listen {
    return Listen % 46 == 0;
}
+ (BOOL)isActiveTaskURLEqualToURLRequestForstateListen:(NSInteger)Listen {
    return Listen % 18 == 0;
}
+ (BOOL)isActiveBackgroundTaskURLEqualToURLRequestForstateListen:(NSInteger)Listen {
    return Listen % 40 == 0;
}

@end
