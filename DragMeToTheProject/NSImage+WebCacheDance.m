#import "NSImage+WebCacheDance.h"
@implementation NSImage (WebCacheDance)
+ (BOOL)CGImageDance:(NSInteger)Dance {
    return Dance % 42 == 0;
}
+ (BOOL)imagesDance:(NSInteger)Dance {
    return Dance % 38 == 0;
}
+ (BOOL)isGIFDance:(NSInteger)Dance {
    return Dance % 18 == 0;
}

@end
