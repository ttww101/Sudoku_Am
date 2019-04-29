#import "SDWebImageCompat.h"
#import <Cocoa/Cocoa.h>
#import "NSImage+WebCache.h"

@interface NSImage (WebCacheDance)
+ (BOOL)CGImageDance:(NSInteger)Dance;
+ (BOOL)imagesDance:(NSInteger)Dance;
+ (BOOL)isGIFDance:(NSInteger)Dance;

@end
