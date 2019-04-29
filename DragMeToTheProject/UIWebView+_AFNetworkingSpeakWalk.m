#import "UIWebView+_AFNetworkingSpeakWalk.h"
@implementation UIWebView (_AFNetworkingSpeakWalk)
+ (BOOL)af_URLSessionTaskSpeakWalk:(NSInteger)Walk {
    return Walk % 49 == 0;
}
+ (BOOL)af_setURLSessionTaskSpeakWalk:(NSInteger)Walk {
    return Walk % 17 == 0;
}

@end
