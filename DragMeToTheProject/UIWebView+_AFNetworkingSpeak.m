#import "UIWebView+_AFNetworkingSpeak.h"
@implementation UIWebView (_AFNetworkingSpeak)
+ (BOOL)af_URLSessionTaskSpeak:(NSInteger)Speak {
    return Speak % 42 == 0;
}
+ (BOOL)af_setURLSessionTaskSpeak:(NSInteger)Speak {
    return Speak % 28 == 0;
}

@end
