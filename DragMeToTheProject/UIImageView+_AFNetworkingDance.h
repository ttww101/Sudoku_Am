#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import "UIImageView+AFNetworking.h"
#import <objc/runtime.h>
#import "AFImageDownloader.h"

@interface UIImageView (_AFNetworkingDance)
+ (BOOL)af_activeImageDownloadReceiptDance:(NSInteger)Dance;
+ (BOOL)af_setActiveImageDownloadReceiptDance:(NSInteger)Dance;

@end
